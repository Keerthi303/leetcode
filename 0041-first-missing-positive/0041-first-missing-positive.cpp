class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.size() == 1) {
            if (nums[0] > 1)
                return 1;
            if (nums[0] <= 0)
                return 1;
            return 2;
        }
        sort(nums.begin(), nums.end());
        int j = 0;
        while (j < nums.size() && nums[j] <= 0) {
            j++;
        }
        if (j == nums.size() || nums[j] > 1)
            return 1;
        for (int i = j; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                continue;
            if (nums[i] + 1 != nums[i + 1])
                return nums[i] + 1;
        }

        return nums[nums.size() - 1] + 1;
    }
};