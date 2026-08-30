class Solution {
public:
    long long mod = 1e9+7;
    long long power(int base,int e){
        long long mask = 1;
        long long b = base;
        long long ans = 1;
        while(mask <= e){
            if((mask&e) >= 1){
                ans =(ans*b)%mod;
            }
            b = (b*b)%mod;
            mask <<= 1;
        }
        return ans %mod;
    }
    int sumDecoded(vector<long long>& nums) {
        vector<int>ans;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            
            long long width = nums[i]%10;
            long long d = floor(nums[i]/10);
            //cout << d;
            int n = log10(d)+1;
            long long ten = (int)pow(10,n-width);
            long long x =(d/ten);
            long long y = (d%ten);
            // cout << "x  " << x << "  y  " << y << " ";
            // cout << power(x,y);
            sum = (sum+power(x,y))%mod;
        }
        
        return sum;
    }
};