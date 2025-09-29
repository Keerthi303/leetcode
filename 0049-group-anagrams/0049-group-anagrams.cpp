class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s = strs;
      for(int i = 0; i < strs.size(); i++){
        sort(s[i].begin(),s[i].end());
      }
      map<string,int> mpp;
      vector<vector<string>> res;
      for(int i = 0; i < s.size(); i++){
        if(mpp.find(s[i]) != mpp.end()){
            res[mpp[s[i]]].push_back(strs[i]);
        }
        else{
            mpp[s[i]] = res.size();
            res.push_back(vector<string>());
            res[mpp[s[i]]].push_back(strs[i]);
        }
      }
      return res;
    }
};