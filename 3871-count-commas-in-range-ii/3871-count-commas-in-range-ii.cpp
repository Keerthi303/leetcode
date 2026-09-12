class Solution {
public:
    long long countCommas(long long n) {
     if(n < 999) return 0;
     long long cnt = 1000;
     long long ans = 0;
     while(cnt <= n){
        ans += n-cnt+1;
        cnt *= 1000;
     }
     return ans;
    }
};