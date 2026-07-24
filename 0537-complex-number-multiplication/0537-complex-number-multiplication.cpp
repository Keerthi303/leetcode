class Solution {
public:
    void intVal(string s,int &v,int &c){
        string temp = "";
        int op = 1;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] != '+' && s[i] != '-' && s[i] != 'i'){
                temp += s[i];
            }
            else if(s[i] == 'i'){
                if(temp.size() == 0) temp = "1";
                c += op*stoi(temp);
                temp = "";
            }
            else if(s[i] == '+' || s[i] == '-'){
                if(temp.size() != 0)
               v += op*stoi(temp);
               if(s[i] == '+') op = 1;
               else op = -1;
               temp = "";
            }
            
        }
        if(s[s.size()-1] != 'i' && temp.size() != 0)
            v += op*stoi(temp);
    }
    string complexNumberMultiply(string num1, string num2) {
        int v1=0,c1=0,v2=0,c2=0;
        intVal(num1,v1,c1);
        intVal(num2,v2,c2);
        int val = (v1*v2)-(c1*c2);
        int comp = (v1*c2)+(v2*c1);
        string ans = to_string(val)+" "+to_string(comp);
        return to_string(val) + "+"+to_string(comp)+"i";
        
    }
};