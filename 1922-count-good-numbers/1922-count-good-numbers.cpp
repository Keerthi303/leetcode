int mod = 1e9+7;
long long power(long long b,long long e){
    long long ans = 1;
    while(e > 0){
        if((1&e)){
            ans = (ans*b)%mod;
        }
        b = (b*b)%mod;
        e >>= 1;
    }
    return ans%mod;
}
class Solution {
public:
    int countGoodNumbers(long long n) {
       int a,b;
       bool odd = n%2;
       if(odd){
        a = power(5,(n/2)+1)%mod;
        b = power(4,(n/2))%mod;
       }
       else {
        a = power(5,n/2)%mod;
        b = power(4,n/2)%mod;
       }
       return (1LL*a*b)%mod;
    }
};