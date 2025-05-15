int maxFreqSum(char* s) {
    int dc[26]={0};
    int vow=0,con=0 ;
    for(int i=0;s[i]!='\0';i++){
        dc[s[i]-'a']++;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(vow<dc[s[i]-'a'])vow=dc[s[i]-'a'];
        }
        else{
             if(con<dc[s[i]-'a'])con=dc[s[i]-'a'];
        }
    }
    return (vow+con);
}