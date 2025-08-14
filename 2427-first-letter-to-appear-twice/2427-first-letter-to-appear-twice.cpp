class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>sp;
        for(int i = 0 ;i < s.size();i++){
            sp[s[i]]++;
            if(sp[s[i]]==2) return s[i];
        }
        return -1;
    }
};