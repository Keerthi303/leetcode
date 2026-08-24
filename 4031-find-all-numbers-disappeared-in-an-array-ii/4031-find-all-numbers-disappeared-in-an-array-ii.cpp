class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<int>temp(2);
        vector<vector<int>>ans;
        int l = lower;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > upper){
                temp[0] = l;
                temp[1] = upper;
                ans.push_back(temp);
                l = INT_MAX;
                break;
            }
            if(nums[i] < l) continue;
            if(nums[i] == l) {
                l = nums[i]+1;
            }
            else if(nums[i] > l){
                temp[0] = l;
                temp[1] = nums[i]-1;
                ans.push_back(temp); 
                l = nums[i]+1;
                // cout << "here";
            }
            else l = nums[i];
            if(l > upper) break;

        }
        // cout << l;
        if(l == upper){
            ans.push_back({l,l});
        }
        if(l < upper){
            ans.push_back({l,upper});
        }
        return ans;

    }
};