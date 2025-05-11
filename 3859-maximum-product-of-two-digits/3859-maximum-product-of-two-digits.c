int maxProduct(int n) {
    int max1=0,max=0;
    int n1 = n;
    while(n!=0){
        int r = n%10;
        if(r>max){
            max1=max;
            max=r;}
        else if(r>max1)max1=r;
        n=n/10;
    }
    return max*max1;
}