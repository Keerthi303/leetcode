int maxBottlesDrunk(int numBottles, int numExchange) {
    int fullBottles = 0, emptyBottles = numBottles, n = numExchange,
        cnt = numBottles;
    while (1) {
        if (fullBottles == 0 && emptyBottles < n)
            break;
        if (emptyBottles >= n) {
            fullBottles++;
            emptyBottles = emptyBottles - n;
            n++;
        } else {
            emptyBottles += fullBottles;
            cnt += fullBottles;
            fullBottles = 0;
        }
    }
    return cnt;
}