class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size();
        int x = 0,k= 0;
        for(int i = 1; i <= n+1; i++){
            k ^= i;
        }
        for(int i = 1; i < n; i+=2){
            x ^= encoded[i];
        }
        vector<int> ans(n+1);
        ans[0] = (x ^ k);
        for(int i = 0; i < n; i++){
            ans[i+1] =ans[i] ^ encoded[i];
        }
        return ans;
    }
};