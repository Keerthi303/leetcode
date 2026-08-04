class Solution {
public:

    const int mod = 1e9+7;
        vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>pf;
        int base = 1;
        while(n > 0){
            if(n&1){
                pf.push_back(base);
            }
            base *= 2;
            n >>= 1;
        }
        vector<int>ans;
        for(int i = 0; i < queries.size();i++){
            int l = queries[i][0],r =queries[i][1];
            int prod = 1;
            for(int j = l; j <= r;j++){
                prod = (1LL*pf[j]*prod)%mod;
            }
            ans.push_back(prod);
        }
        return ans;
    }
};