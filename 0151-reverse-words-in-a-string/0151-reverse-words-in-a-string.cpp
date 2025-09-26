class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string res = "";
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != ' '){
                temp += s[i];
            }
            if(s[i] == ' '){
                if(temp.size() == 0) continue;
                reverse(temp.begin(),temp.end());
                res += temp;
                res += ' ';
                temp = "";
            }
        }
         reverse(temp.begin(),temp.end());
                res += temp;
        if(res[res.size()-1] == ' ') res.pop_back();
        
        return res;
    }
};