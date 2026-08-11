class Solution {
public:
    int minBitFlips(int start, int goal) {
        int mask = 1;
        int m = start^goal;
        int cnt = 0;
        while(mask <= m){
            if((mask&m) >= 1 )cnt++;
            mask <<= 1;
        }
        return cnt;
    }
};