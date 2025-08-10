class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        int end = k;
        double sum = 0;
        if(nums.size()<=k)
        k = nums.size();
        double maxS = INT_MIN;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxS = sum;
        for(int i = k;i<nums.size();i++){
           sum = sum+nums[i]-nums[i-k];
           maxS=max(maxS,sum);

        }
        return maxS/k;
    }
};