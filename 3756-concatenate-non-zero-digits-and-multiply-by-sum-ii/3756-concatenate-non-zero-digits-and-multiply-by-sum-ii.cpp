class Solution {
public:
    const int mod = 1e9 + 7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> sum(n + 1), StrCon(n + 1), nonZero(n + 1), pow10(n + 1);
        sum[0] = 0;
        StrCon[0] = 0;
        nonZero[0] = 0;
        pow10[0] = 1;
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + s[i] - '0';
            pow10[i + 1] = (1LL * pow10[i] * 10) % mod;
            nonZero[i + 1] = nonZero[i];
            if (s[i] != '0') {
                nonZero[i + 1]++;
                StrCon[i + 1] = (1LL * StrCon[i] * 10 + (s[i] - '0')) % mod;
            } else
                StrCon[i + 1] = StrCon[i];
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0], r = queries[i][1];

            int Sum = sum[r + 1] - sum[l];
            int cnt = nonZero[r + 1] - nonZero[l];
            int ex = (1LL*pow10[cnt] * StrCon[l]) % mod;
            int diff = (StrCon[r + 1] - ex+mod) % mod;
            int a = (1LL * Sum * diff + mod) % mod;
            ans.push_back(a % mod);
        }
        return ans;
    }
};