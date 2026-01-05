class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a(nums.size());
        int j = 0;
        for(int i = 0; i < n; i++){
            a[j++] = nums[i];
            a[j++] = nums[n+i];
        }
        return a;
    }
};