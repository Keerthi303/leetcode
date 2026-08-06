class Solution {
public:
    int maxLength(vector<string>& arr) {
       vector<pair<int,int>>freq,mp;
        
        for(int i = 0; i < arr.size(); i++){
            int f = 0;
            for(int j = 0; j < arr[i].size(); j++){
                int temp = 1 << (arr[i][j]-'a'+1);
                if((temp&f) > 0){
                    f = 0;
                    break;
                }
                f = f | temp;
            }
            if(f != 0)
             freq.push_back({f,(int)arr[i].size()});
        }
        vector<pair<int,int>> dp;
        dp.push_back({0,0});
        int ans = 0;
        for(int i = 0; i < freq.size(); i++){
            int sz = dp.size();
            int mask = freq[i].first;
            int len = freq[i].second;
            for(int j = 0; j < sz; j++){
                if((mask & dp[j].first) == 0){
                    int newMask = dp[j].first | mask;
                    int newLen = dp[j].second + len;
                    dp.push_back({newMask,newLen});
                    ans = max(ans,newLen);
                }
            }
        }
        return ans;
    }
};