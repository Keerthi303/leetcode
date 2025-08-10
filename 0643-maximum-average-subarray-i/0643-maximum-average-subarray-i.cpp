class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        int sum = 0;
        double maxS = INT_MIN;
        while(end!=nums.size()){
            sum+=nums[end];
            if(end-start==k-1){
                double avg = sum/(k*1.0);
                maxS = max(maxS,avg);
                sum -= nums[start];
                start++;
            }
            end++;
        }
        return maxS;
    }
};