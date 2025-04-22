char* reverseWords(char* s) {
    int l=strlen(s);
   int intial=0,final;
   int i=0;
   while(s[i]!='\0'){
   if(s[i+1]==' '||s[i+1]=='\0'){
    final =i;
    int final1=i;
   while(intial<=final){
    char ch=s[intial];
    s[intial]=s[final];
    s[final]=ch;
    intial++;
    final--;
   }
   intial=final1+2;
   }
   i++;
   }
   return s;
}