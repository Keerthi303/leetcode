class Solution {
public:
    int digit_count(int n){
        if(n == 0) return 1;
        return log10(n)+1;
    }
    int makeDigits(int n, int k){
        int digi = 0;
        for(int i = n; i < n+k;i++){
            if(n > 9)
            break;
            digi =  (digi * 10) + i;
        }
        return digi;
       
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int i = 1;
        int cnt = digit_count(low);
        while(cnt <= digit_count(high)){
            i = 1;
            
        while(makeDigits(i,cnt) <= high){
            if(makeDigits(i,cnt) >= low && makeDigits(i,cnt) <= high ){
            ans.push_back(makeDigits(i,cnt));
            }
            i++;
            if(9-i+2 == cnt ) break;
        }
        cnt++;
        }
         return ans;
    }
};