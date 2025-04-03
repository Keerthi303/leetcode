bool isBalanced(char* num) {
    int odd=0,even=0;
    for(int i=0 ;num[i]!='\0';i++){
        int n=num[i]-'0';
        if(i%2==0)even+=n;
        else odd+=n;
    }
    return (odd==even);
}