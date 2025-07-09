class Solution {
public:
   int torf(int  n,int base){
     string s;
        while(n){
            int k = n % base ;
            if(k == 0) s += '0';
            else s += to_string(k);
            n = n/base;
        }
        int flag =0;
        string s1 = s;
        reverse(s.begin() , s.end());
        if(s == s1) flag = 1;
        if(flag == 1) return true;
        else return false;
   }
    bool isStrictlyPalindromic(int n) {
        int x = n,base = n-2;
     while(base != n-3||base!=0 && base !=0){
       if(torf(n,base)==0) return false;
        base = base-1;
     }
     return true;
    }
};