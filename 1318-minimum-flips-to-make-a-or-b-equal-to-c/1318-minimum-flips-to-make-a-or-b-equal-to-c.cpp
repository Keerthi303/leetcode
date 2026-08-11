class Solution {
public:
    int minFlips(int a, int b, int c) {
        long long mask = 1;
        int cnt = 0;
        if ((a | b) == c)
            return 0;
        while (mask <=a|| mask <= b ||mask <= c) {
            int k = a & mask;
            int l = b & mask;
            int m = c & mask;
            if( k == 0 && l == 0 && m >= 1 )cnt++;
            else if( k >= 1 && l == 0 && m == 0)cnt++;
            else if( k == 0 && l >= 1 && m == 0)cnt++;
            else if( k >= 1 && l >= 1 && m == 0)cnt += 2;
        mask <<= 1;
        }
    return cnt;
}
}
;