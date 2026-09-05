class Solution {
public:
    bool ischeck(string s1,string s2){
        return (s1+s2 == s2+s1);
    }
    string gcdOfStrings(string str1, string str2) {
       
       // map<char,int>mp1,mp;
        
       // int m = min(str1.size(),str2.size());
        
        if(ischeck(str1,str2) == false)return ""; 
        int l = gcd(str1.size(),str2.size());
        string  ans = str1.substr(0,l);
        
        return ans;
    }
};