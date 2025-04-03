int findPermutationDifference(char* s, char* t) {
    int sum = 0;
    int dc[26]={0};
    for(int i=0;s[i]!='\0';i++){
     dc[s[i]-'a']=abs(dc[s[i]-'a']-i);
     dc[t[i]-'a']=abs(dc[t[i]-'a']-i);
    }
    for(int i=0 ;s[i]!='\0';i++){
        sum+=dc[s[i]-'a'];
    }
    return sum;
}