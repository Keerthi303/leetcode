char* reverseOnlyLetters(char* s) {
    int n=0;
    int r,l;
    int k=strlen(s);
    int i=0,j=k-1;
    while(i<j){
        if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))){
           i++;
           continue;
        }
         if(!((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
            j--;
            continue;
         }
            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;
          i++;
         j--;
         }
        return s;
    }