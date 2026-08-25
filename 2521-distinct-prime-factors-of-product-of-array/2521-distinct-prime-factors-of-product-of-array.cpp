 vector<int>spf(10001);
class Solution {
public:
   
    void seive(){
        for(int i = 0; i < 10001;i++){
            spf[i] = i;
        }
        for(int i = 2; i*i < 10001;i++){
            for(int j = i*i; j < 10001; j+=i){
                if(spf[j] == j) spf[j] = i;
            }
        }

    }
    int distinctPrimeFactors(vector<int>& nums) {
        seive();
        set<int>s;
        for(int i = 0; i < nums.size(); i++){
            int k = nums[i];
            while(k > 1 ){
                s.insert(spf[k]);
                 k /= spf[k];
            }
        }
        return s.size();
    }
};