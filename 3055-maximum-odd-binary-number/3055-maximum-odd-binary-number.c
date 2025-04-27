char* maximumOddBinaryNumber(char* s) {
    int  l = strlen(s);
    int one=0;
    for(int i=0;i<l;i++){
    if(s[i]=='1')one++;
    }
    s[l-1]='1';
    for(int i=0;i<=one-1;i++){
    s[i]='1';
    }
    for(int i=one-1;i<l-1;i++){
    s[i]='0';
    }
    return s;
}