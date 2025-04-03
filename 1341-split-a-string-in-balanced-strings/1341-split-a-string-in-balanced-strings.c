int balancedStringSplit(char* s) {
    int k=0,c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='R')k++;
        else k--;
        if(k==0)c++;
    }
    return c;
}