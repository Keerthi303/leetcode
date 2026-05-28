class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          vector<int> pf(nums.size());
          pf[0] = nums[0];
          for(int i = 1; i < nums.size(); i++){
            pf[i] = nums[i]+pf[i-1];
          }  
          for(int i = 0; i <nums.size(); i++){
            int lSum,rSum;
            if(i == 0){
                lSum = 0;
                rSum = pf[nums.size()-1]-pf[i];
            }
            else if(i == nums.size()-1){
                rSum = 0;
                lSum = pf[i-1];
            }
            else{
                lSum = pf[i-1]; 
                rSum = pf[nums.size()-1]-pf[i];
            }
            if(rSum == lSum) return i;
          }
          return -1;

    }
};