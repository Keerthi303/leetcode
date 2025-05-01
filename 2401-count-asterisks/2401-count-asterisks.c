int countAsterisks(char* s) {
    int l=0,sum=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='|'){
            l++;
        }
        if(l==2) l=0;
        if(l==0){
            if(s[i]=='*') sum++;
        }
    }
    return sum;
}