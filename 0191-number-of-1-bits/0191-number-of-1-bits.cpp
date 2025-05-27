class Solution {
public:
    int hammingWeight(int n) {
        int sum=0;
        while(n){
       if(n%2!=0)sum++;
       n=n/2;
        }
        return sum;
    }
};