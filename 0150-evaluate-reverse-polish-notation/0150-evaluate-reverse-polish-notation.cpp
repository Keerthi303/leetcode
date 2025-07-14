class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int operator1,operator2;
        for(auto i:tokens){
            if(isdigit(i[0])|| (i[0] == '-' && i.length() > 1))
            {
                int num = stoi(i);
               st.push(num);
            }
            else {
                operator1 = st.top();
                st.pop();
                 operator2 = st.top();
                st.pop();
                 if(i =="+") {
                st.push(operator1+operator2);
                }
                 else if(i =="-") {
                st.push(operator2-operator1);
                }
                 else if(i=="*") {
                st.push(operator1*operator2);
                }
                 else if(i=="/") {
                st.push(operator2/operator1);
                }
            }
   
        }
        return st.top();
    }
};