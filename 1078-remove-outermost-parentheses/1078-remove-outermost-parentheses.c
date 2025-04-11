char* removeOuterParentheses(char* s) {
        int k=0;
    int l=strlen(s);
    char *a = (char*)malloc((l+1)*sizeof(char));
    int j=0;
    for(int i=0;i<l;i++){
        if(s[i]=='('){
            if(k>0){
                a[j++]=s[i];
            }
            k++;
        }
        else{
            k--;
            if(k>0){
                 a[j++]=s[i];
            }
        }
    }
   a[j]='\0';
   return a;
}