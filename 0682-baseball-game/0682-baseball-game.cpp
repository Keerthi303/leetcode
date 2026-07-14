class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>a;
        stack<int>s;
        for(auto i :ops){
            if(i == "+"){
                int sum = 0;
                int x = s.top();
                s.pop();
                sum = (x+s.top());
                s.push(x);
                s.push(sum);
            }
            else if(i == "C"){
                s.pop();
            }
            else if(i == "D"){
                s.push(s.top()*2);
            }
            else{
                s.push(stoi(i));
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
                s.pop();
        }
        return sum;
    }
};