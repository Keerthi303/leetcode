class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mpp;
        for(int i = 0;i <s.size();i++){
            mpp[s[i]]++;
        }
        int l =0;
        for(int i = 0;i <s.size();i++ ){

            if(mpp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};