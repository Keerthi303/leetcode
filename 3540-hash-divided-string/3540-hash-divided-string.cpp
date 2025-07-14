class Solution {
public:
    string stringHash(string s, int k) {
        int j=k;
        int num = 0;
        string ans;
        int i = 0;
       while(i!=s.length()){
        num +=( s[i] - 'a');
        j--;
        if(j == 0){
            j=k;
            ans += 'a'+(num%26);
            num = 0;
        }
        i++;
       }
       return ans;
    }
};