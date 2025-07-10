class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string first;
        for(int i = 0 ; i < words.size() ; i++){
            first += words[i][0];
        }
        if(s == first ) return true;
        return false;
    }
};