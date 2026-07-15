class Solution {
public:
    string convert(string s, int numRows) {
        int left = 2*(numRows-1),right = 0;
        bool flag = true;
        int k = 0;
        string ans = "";
        if(numRows <= 1 )return s;
        int  i= k;
       while(i < s.size()){
            ans += s[i];
            i= i+left;
        }
        k++;
        while(k < numRows-1){
            i = k;
            left -=2;
            right +=2;
            flag = true;
            while(i < s.size()){
               // if(i < numRows && k != i) continue; 
           if(flag){
            ans += s[i];
             i= i+left;
             flag = false;
           }
           else {
            ans += s[i];
            i += right;
            flag = true;
           }
        }
        k++;
        }
        right =  2*(numRows-1),i = numRows-1;
        while(i < s.size()){
            ans += s[i];
            i= i+right;
        }
        return ans;
    }
};