class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0] = 1;
        int p = 0;
        int cnt = 0;
        for(int i = 0; i < n;i++){
            p += nums[i];
            if(mp.find(p-k)!= mp.end()) cnt += mp[p-k];
            mp[p]++;
        }
        return cnt;
    }
};