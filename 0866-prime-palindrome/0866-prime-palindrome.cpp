
class Solution {
    bool is_prime(long long n){
        if(n == 0 || n == 1)  return false;
        for(long long i = 2; i*i <= n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    bool is_palindrome(int n){
       int k = n;
       int l = 0;
       while(n > 0){
        int r = n%10;
            l = (1LL*l*10)+r;
            n/=10;
       }
       return (k == l);
    }
public:
    int primePalindrome(int n) {
      int k = n;
        if(n >=9989900) return 100030001;
        while(1){
            if(is_palindrome(k)){
                if(is_prime(k))
                return k;
            }
              k++;
        }
        return k;
    }
};