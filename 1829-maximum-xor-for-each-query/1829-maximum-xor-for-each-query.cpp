class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxVal = nums[0];
        int n = nums.size();
        vector<int> pf;
        pf.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            pf.push_back(pf[i-1]^nums[i]);
            maxVal = max(maxVal,nums[0]);
        }
        vector<int>ans;
        for(int i = n-1;i >= 0;i--){
            ans.push_back(((1<<maximumBit)-1)^ pf[i]);
        }
        return ans;
    }
};