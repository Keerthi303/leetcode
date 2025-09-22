class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for(int i = 0; i <nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> res;
        int cnt = 0;
        for(auto i : mpp){
            if(i.second == 1) {res.push_back(i.first);
            cnt++;}
            if(cnt == 2) break;
        }
        return res;
    }
};