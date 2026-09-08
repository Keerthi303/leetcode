class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int Max = INT_MIN, Min = INT_MAX;
        int max_idx, min_idx;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > Max) {
                Max = nums[i];
                max_idx = i;
            }
            if (nums[i] < Min) {
                Min = nums[i];
                min_idx = i;
            }
        }
        int ans1, ans2, ans3;
        if (max_idx > min_idx) {
            ans1 = nums.size() - max_idx + min_idx+1;
        } else {
            ans1 = nums.size() - min_idx + max_idx+1;
        }
        ans2 = max(max_idx, min_idx) + 1;
        ans3 = nums.size() - min(max_idx, min_idx);
        return min(ans1, min(ans2, ans3));
    }
};