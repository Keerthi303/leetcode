class Solution {
public:
    long long maxScore(vector<int>& nums) {
         int n = nums.size();
         long long ans = 0;
        if(nums.size() == 1)
        return nums[0]*nums[0];

        if(nums.size() == 0)
        return 0;

        sort(nums.begin(),nums.end());

        if(nums.size() == 2 )
        return nums[1]*nums[1];

       
      
        for(int i = 0; i < nums.size();i++){
            long long LCM = 1 ,GCD = 0;
            for(int j = 0; j < n; j++){
            if(i != j){
            LCM = lcm(LCM,nums[j]);
            GCD = gcd(GCD,nums[j]);}
            }
            ans = max<long long>(ans,LCM*GCD);
        }
        long long LCM = 1 ,GCD = 0;
        for(int j = 0; j < n; j++){
            LCM = lcm(LCM,nums[j]);
            GCD = gcd(GCD,nums[j]);
        }
         ans = max<long long>(ans,LCM*GCD);
        return ans;
    }
};

