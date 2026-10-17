class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr(nums.size()),ans(2);
        int flag = 0,k = 1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]-1]++;
            if(arr[nums[i]-1]  == 2){
                ans[0] = nums[i];
                //break;
            }
        }
        for(int i = 1; i <= nums.size(); i++){
            if(arr[i-1] == 0){
                ans[1] = i;
                //break;
            }
        }
        return ans;
    }
};