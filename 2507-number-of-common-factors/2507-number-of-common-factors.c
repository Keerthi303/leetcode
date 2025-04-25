int commonFactors(int a, int b) {
    int c=0;
    int h;
    if(a>b)h=b;
    else h=a;
    for(int i=1;i<=h;i++){
        if(a%i==0&&b%i==0) c++;
    }
    return c;
}