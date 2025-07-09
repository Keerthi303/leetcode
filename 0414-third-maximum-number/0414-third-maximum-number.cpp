class Solution {
public:
    int thirdMax(vector<int>& nums) {
    sort(nums.rbegin(),nums.rend());
   int l =  nums.size();
   int k = 1;
    for( auto i = 0; i < nums.size()-1;i++){
         if (nums[i] != nums[i+1]) {
            k++;
         }
         if(k==3) return nums[i+1];
    }
    return nums[0];

       }
};