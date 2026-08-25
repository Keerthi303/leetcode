vector<bool>prime((5*1e6)+1,true);
bool sevie(){
    prime[0] = false;
    prime[1] = false;
    for(int p = 0; p*p < (5*1e6)+1; p++){
                if(prime[p] == true){
                    for(int i = p*p; i < (5*1e6)+1 ;i+=p){
                        prime[i] = false;
                    }
                }
            }
    return true;
}
bool k = sevie();
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        for(int i = 2; i < n; i++){
            if(prime[i]==true) cnt++;
        }
        return cnt;
    }
};