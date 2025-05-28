class Solution {
public:
   void binary(int n,string &s1){
    string s;
    while(n){
        if(n%2==0) s+='0';
        else s+='1';
           n=n/2;
    }
    reverse(s.begin(),s.end());
    if(s1.size()!=0)s1.push_back('-');
    s1 += s;
   }
    string convertDateToBinary(string date) {
        string s,s1;
        int i=0;
         while(i<date.size()){
            
            if(date[i]=='-'){
                binary(stoi(s),s1);
                s.clear();
            }
            else
        s+=date[i];
        i++;
         }
         binary(stoi(s),s1);
         return s1;
    }
};