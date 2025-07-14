class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor ==-1) return INT_MAX;
        if(dividend == INT_MAX && divisor ==1) return INT_MAX;
     long  i =dividend, j =divisor ;
     int mins = 1;
     if(i < 0 && j > 0){
        i *= -1;
        mins = -1;
     }
     else if(j < 0 && i > 0){
      j *= -1;
       mins = -1;
     }
     else if(j < 0 && i < 0){
       i = abs(i);
       j = abs(j);
     }

    long  num = i/j;
    return mins*num;
    }
};