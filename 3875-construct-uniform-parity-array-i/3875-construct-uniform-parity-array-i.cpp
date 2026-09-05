class Solution {
public:
    bool is_even(vector<int> nums1){
         for(int i = 0; i < nums1.size(); i++){
            if(nums1[i]%2 == 0) continue;
            int flag = 0;
            for(int j = 0; j< nums1.size();j++){
                if(i == j) continue;
                if((nums1[i]-nums1[j])%2 == 0) {
                    flag = 1;
                break;
                }
            }
            if(flag == 0) return false;
        }
        return true;
    }
     bool is_odd(vector<int> nums1){
         for(int i = 0; i < nums1.size(); i++){
            if(nums1[i]%2 != 0) continue;
            int flag = 0;
            for(int j = 0; j< nums1.size();j++){
                if(i == j) continue;
                if((nums1[i]-nums1[j])%2 != 0) {
                    flag = 1;
                break;
                }
            }
            if(flag == 0) return false;
        }
        return true;
    }
    bool uniformArray(vector<int>& nums1) {
        return (is_even(nums1) || is_odd(nums1));
    }
};