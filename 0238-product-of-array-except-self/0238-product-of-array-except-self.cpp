class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long totalProduct = 1,nonZeroProduct = 1;
        int ZeroCnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] !=  0) nonZeroProduct *= nums[i];
            else ZeroCnt++;
            totalProduct *= nums[i];
        }
        vector<int>ans(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(ZeroCnt > 1 && nums[i] == 0) ans[i] = 0;
            else if(nums[i] ==  0 && ZeroCnt == 1) ans[i] = nonZeroProduct;
            else ans[i] = totalProduct/nums[i];
        }
        return ans;
    }
};