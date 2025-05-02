int pivotInteger(int n) {
    if(n==1)return 1;
    int x=n-1;
    int s1=n,s2;
    while(x>0){
    s1+=x;
    s2=(x*(x+1))/2;
    if(s1==s2) return x;
    x--;
    }
    return -1;
}