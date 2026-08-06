class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>pf,ans;
        pf.push_back(0);
        for(int i = 0; i < arr.size(); i++){
            int t = pf[i] ^ arr[i];
            pf.push_back(t);
        }
        for(int i = 0; i < queries.size(); i++){
            int l = queries[i][0], r = queries[i][1];
            ans.push_back((pf[l]^pf[r+1]));
        }
        return ans;
    }
};