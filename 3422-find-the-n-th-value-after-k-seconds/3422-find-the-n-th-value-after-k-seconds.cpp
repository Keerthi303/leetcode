class Solution {
public:
    int mod = 1e9+7;
    int valueAfterKSeconds(int n, int k) {
        vector<int> a(n,1);
        for(int j = 1; j <= k; j++){
            for(int i = 1; i < n; i++){
                a[i] = (a[i-1]+a[i])%mod;
            }
        }
        return a[n-1];
    }
};