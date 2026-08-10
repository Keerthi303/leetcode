bool isHappy(int n) {
    long long sum=0;
    while(n!=1&&n!=4){
         sum=0;
        while(n!=0){
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }
        n=sum;
        }
    return (n==1);
}
    