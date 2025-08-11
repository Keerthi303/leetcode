class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int cnt = 0;
        vector<int> a;
        map<int,int>mpp;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        multimap<int,int,greater<int>>mmpp;
        for(auto i : mpp){
             mmpp.insert({i.second, i.first});
        }
        for(auto i : mmpp){
            cnt++;
            a.push_back(i.second);
            if(cnt == k) break;
        }
        return a;
    }
};