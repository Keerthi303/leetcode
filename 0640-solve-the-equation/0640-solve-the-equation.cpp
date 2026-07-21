class Solution {
public:
    string solveEquation(string equation) {
        int n = equation.size();
        int x = 0, v = 0;
        int eq = 1,ops = 1;
        string temp = "";
        

        for(int i = 0; i < n; i++){

            if(equation[i] != '+'&& equation[i] != '-'&&equation[i] != 'x'&&equation[i] != '=')
            temp+=equation[i];

            else if(equation[i] == 'x'){
                if(temp.size() ==0)temp= "1";
                x += ops*stoi(temp)*eq;

            }
            else{
                if(i != 0 && equation[i-1] != 'x'){
                    if(temp.size() != 0)
                v  += ops*stoi(temp)*eq;    
                }
                if(equation[i] == '+') ops = 1;
                else if(equation[i] == '-') ops = -1;
                else if(equation[i] == '=') {
                     eq = -1;
                     ops = 1;
                     }
            temp = "";
            }
        }
        if(equation[n-1] != 'x')v += ops*stoi(temp)*eq;
        v = v * -1;
        if(v == 0 && x == 0)return "Infinite solutions";
        else if(x == 0 && v != 0) return "No solution";
        if(x != 0 )
            v = v/x;
        return "x="+to_string(v);
    }
    
};