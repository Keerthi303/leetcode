class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mpp,sp;
        for(int i = 0; i < words1.size() ; i++){
            mpp[words1[i]]++;
        }
         for(int i = 0; i < words2.size() ; i++){
            sp[words2[i]]++;
        }
        int cnt = 0;
        for(int i = 0; i < words1.size(); i++){
            if(mpp[words1[i]] == 1 && sp[words1[i]] == 1) cnt++;
        }
        
     return cnt;
        }
   
};