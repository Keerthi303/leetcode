class Solution {
public:
    int reverseBits(int n) {
        int a = 0;
        int k = 1;
        for(int i = 0; i < 32;i++){
            int bit  = 0;
            if((k&n) >= 1) bit = 1;
            a = (a << 1) | bit;
            k <<= 1;
        }
        return a;
    }
};