class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long half1 = 0, half2 = 0;
        int n = nums.size()/2;
        int cnt = 0;
        for(int i = 0; i < n;i++){
            half1 += nums[i];
            half2 += nums[(n)+i];
        }
        for(int i = 0; i < n; i++){
            if(half1 != half2) cnt++;
           
            half1 = half1 -nums[i] + nums[(n)+i];
            half2 = half2 - nums[(n)+i] + nums[i];
        }
        return cnt;
    }
};