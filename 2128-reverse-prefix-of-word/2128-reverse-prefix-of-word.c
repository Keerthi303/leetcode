int find(char s[],char k){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==k)return i;
    }
    return 0;
}
char* reversePrefix(char* word, char ch) {
    int l=strlen(word);
    char *a = (char*)malloc((l+1)*sizeof(char));
   int n= find(word,ch);
   int i=n;
   int j=0;
   while(i!=-1){
    a[j++]=word[i--];
   }
   i=n+1;
   while(word[i]!='\0'){
    a[j++]=word[i++];
   }
   a[i]='\0';
   return a;
}