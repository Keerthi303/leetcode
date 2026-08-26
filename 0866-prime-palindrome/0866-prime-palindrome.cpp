class Solution {

    bool is_prime(long long n){
        if(n == 0 || n == 1)  return false;
        for(long long i = 2; i*i <= n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    bool is_palindrome(int n){
        string s = to_string(n);
        string k = s;
        reverse(s.begin(),s.end());        
        return (s == k);
    }
public:
    int primePalindrome(int n) {
        int k = n;
        if(n >=9989900) return 100030001;
        while(1){
            if(is_prime(k)){
                if(is_palindrome(k))
                return k;
            }
              k++;
        }
        return k;
    }
};