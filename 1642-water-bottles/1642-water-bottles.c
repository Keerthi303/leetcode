int numWaterBottles(int numBottles, int numExchange) {
    int n = numBottles, m = numExchange;
    int sum = n;
    while (1) {
        int c = n / m;
        int e = n % m;
        n = c + e;
        sum += c;
        if (n < m)
            break;
    }
    return sum;
}