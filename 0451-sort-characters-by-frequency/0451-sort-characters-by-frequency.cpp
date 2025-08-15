class Solution {
public:
    string frequencySort(string s) {
        map<char, int> spc;
        for (int i = 0; i < s.size(); i++) {
            spc[s[i]]++;
        }
        multimap<int, char,greater<int>> spc1;
        for (auto i : spc) {
            spc1.insert({i.second, i.first});
        }
        string res;
        for (auto &i : spc1) {
            int k = i.first;
            while (k) {
                res += i.second;
                k--;
            }
        }
        return res;
    }
};