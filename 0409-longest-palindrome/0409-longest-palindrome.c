int longestPalindrome(char* s) {
    int dc[52];
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
        dc[s[i]-'a']++;
        }
        else{
        dc[s[i]+26-'A']++;
        }
    }
    int eve=0,od=0,one=0;
    for(int i=0;i<52;i++){
        if(dc[i]!=0){
        if(dc[i]==1) one=1; 
        else if(dc[i]%2==0){
            eve+=dc[i];
        }
        else{
            if(dc[i]>1){
                od+=(dc[i]-1);
                one=1;
            }
        }
        }
    }
    return eve+od+one;
}