class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>spc;
        for(string i : words){
            spc[i]++;
        }
        multimap<int,string,greater<int>>spc1;
        for(auto i : spc){
            spc1.insert({i.second,i.first});
        }
        vector<string>res;
        int kth=0;
        for(auto &i:spc1){
          if(kth==k) break;
          string str = i.second;
          res.push_back(str);
          kth++;
          
        }
        return res;
    }
};