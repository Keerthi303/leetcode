class Solution {
public:
    int minimumPushes(string word) {
        vector<int> mp(26,0);
        for(auto i : word){
            mp[i-'a']++;
        }
        sort(mp.rbegin(),mp.rend());
        int k = 1, prod = 1,sum = 0;
        for(int i = 0; i < 26; i++){
            if(mp[i] == 0) break;
            if(k == 9){
                k = 1;
                prod += 1;
            }
            sum += (prod*mp[i]);
            k++;
        }
        return sum;
    }
};