class Solution {
public:
    bool is_vowel(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
         return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt = 0;
        for(int i = 0; i < k; i++){
            if(is_vowel(s[i]))
            cnt++; 
        }
        int maxVal = cnt;
        for(int i = k; i < s.size();i++){
            if(is_vowel(s[i])) cnt++;
            if(is_vowel(s[i-k]))cnt--;
            maxVal = max(maxVal,cnt);
        }
        return maxVal;
    }
};