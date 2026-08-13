class Solution {
public:
    double myPow(double x, int k) {
        double ans = 1;
        int flag = 0;
        long long n = k;

        if(n < 0) {
             flag = 1;
             n *= -1*1LL;
        }
        while(n > 0){
            if((1&n)){
                ans *= x;
            }
            x *= x;
            n >>= 1;
        }
        if(flag == 1) return 1/ans;
        return ans;
    }
};