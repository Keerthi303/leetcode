bool isPalindrome(char* s) {
  int l=strlen(s);
  if(l<=1)return true;
  char b[l+1];
  int k=0;
  for(int i=0;i<l;i++){
   if(s[i]>='a'&&s[i]<='z'){
    b[k++]=s[i];
   }
   else if(s[i]>='A'&&s[i]<='Z'){
    b[k++]=tolower(s[i]);
   }
    else if(s[i]>='0'&&s[i]<='9'){
    b[k++]=s[i];
   }
  }
  b[k]='\0';
  l=strlen(b);
  for(int i=0;i<l/2;i++){
    if(b[i]!=b[l-1-i]){
        return false;
    }
  }
  return true;
}