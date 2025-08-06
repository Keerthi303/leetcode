class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=0;
         if(digits[0]==9&&digits.size()==1){
            digits[0] = 1;
            digits.push_back(0);
            return digits;
         }
        if(digits[digits.size()-1]==9){
            digits[digits.size()-1] = 0;
            add =1;
        }
        else {
            digits[digits.size()-1] += 1;
        }
       for(int i=digits.size()-2;i>=0;i--){
         if(digits[i]==9&&add==1){
            digits[i] = 0;
            add = 1;
        }
        else{
            digits[i] = digits[i]+add;
            add=0;
        }
       }
       if(add==1) digits.insert(digits.begin(),1);
       return digits;
    }
};