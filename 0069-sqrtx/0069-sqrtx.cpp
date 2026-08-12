class Solution {
public:
    int mySqrt(int x) {
      if(x ==0)return  0;
      if(x == 2) return 1;
       for(int i = 1; i <x;i++){
            if(1LL*i * i > x) return i-1;
       }
       return x;
    }
};