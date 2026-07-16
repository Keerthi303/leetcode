class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        long long sum = 0;
        vector<long long> prefix(n),ans(n);

        prefix[0] = nums[0];
        ans[0] = gcd(nums[0],prefix[0]);
        for(int i = 1 ;i < n; i++){
            prefix[i] = max<int>(nums[i] ,prefix[i-1]);
            ans[i] = gcd(nums[i],prefix[i]);
            
        }
        sort(ans.begin(),ans.end());
        for(int i = 0; i < (n/2);i++){
            sum += gcd(ans[i],ans[n-1-i]);
        }
        
        return sum;
    }

};