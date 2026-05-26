class Solution {
public:
    int  lowerCase(char  i ){
        int flag = 0;
        if(i >= 'a' && i <= 'z') {
            flag = 1;
        }
       return (flag == 1) ? 1 : 0;
    }
     int  upperCase(char i ){
        int flag = 0;
        if(i >= 'A' && i <= 'Z') {
            flag = 1;
        }
       return (flag == 1) ? 2 : 0;
    }
     int  Num(char i ){
        int flag = 0;
        if(i >= '0' && i <= '9') {
            flag = 1;
        }
       return (flag == 1) ? 3 : 0;
    }
     int  special(char i ){
        int flag = 0;
        if(i == '!' || i == '@' || i == '#'|| i == '$')  {
            flag = 1;
        }
       return (flag == 1) ? 5 : 0;
    }
    int passwordStrength(string password) {
        set<int> s;
        for(int i = 0; i < password.size(); i++){
            s.insert(password[i]);
        }
        int ans = 0;
        for(auto i : s){
            ans += lowerCase(i) + upperCase(i) + Num(i)+special(i);
        }
        return ans;
    }
    
};