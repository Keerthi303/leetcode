int palindrome(char *s){
  int l = strlen(s);
  int i=0,j=l-1,flag=1;
  while(i<=j){
    if(s[i]!=s[j]){
     return 0;
    }
    i++;
    j--;
  }
  return flag;
}
char* firstPalindrome(char** words, int wordsSize) {
    for(int i=0;i<wordsSize;i++){
        if(palindrome(words[i])){
          return words[i];
        }
    }
    return "";
}