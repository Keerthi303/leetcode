class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long last = 1LL*abs(1LL*nums[n-1]*nums[n-2]);
        long long first = 1LL*abs(1LL*nums[0]*nums[1]);
        long long last_first = 1LL*abs(1LL*nums[0]*nums[n-1]);
       
        return 1LL*max(last,max(first,last_first))*100000;
    }
};