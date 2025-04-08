int sumOfMultiples(int n) {
    int sum=0,c=0,i=1;
    for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0){
            sum+=i;
        }
    }
    return sum;
}