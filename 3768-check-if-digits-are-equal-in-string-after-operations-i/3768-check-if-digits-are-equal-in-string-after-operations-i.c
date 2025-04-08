bool hasSameDigits(char* s) {
    int l = strlen(s);
    char *res = (char*)malloc((l+1)*sizeof(char));
    res[0] = '\0';
    while(1){
        int k=0;
    for(int i=0;i<strlen(s)-1;i++){
        char n=(s[i]-'0'+s[i+1]-'0')%10;
    res[k++]=n+'0';
    }
    res[k]='\0';
    if(strlen(res)==2){
    if(res[0]==res[1]){
        return 1;
    }
    else return 0;
    }
    strcpy(s,res);
}
return 0;
}