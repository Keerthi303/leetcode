class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      int n = nums.size();
      int cnt = 0;
      int p = 0;
      unordered_map<int,int>mp;
      mp[0] = -1;
      for(int i = 0; i <n; i++){
        p += nums[i];
        int rem = p%k;
        if(mp.find(rem) != mp.end()){
            if (i - mp[rem] >= 2)
                    return true;
        }
        else mp[rem] = i;
      }
      return false;
    }
};