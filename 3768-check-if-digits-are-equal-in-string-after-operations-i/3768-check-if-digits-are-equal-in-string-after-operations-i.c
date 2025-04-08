bool hasSameDigits(char* s) {
   int l=strlen(s);
   while(l!=2){
    for(int i=0;i<l;i++){
        s[i]=((s[i]+s[i+1])-2*'0')%10;
    }
    l--;
   }
   return s[0]==s[1];
}