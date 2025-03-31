bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int l1=0,l2=0;
   for(int i = 0; i < word1Size; i++){
     l1+= strlen(word1[i]);
    }
    for(int i = 0; i < word2Size; i++){
     l2+= strlen(word2[i]);
    }
    char *ch1 = (char*)malloc((l1+1)*sizeof(char));
    char *ch2 = (char*)malloc((l2+1)*sizeof(char));
    ch1[0]='\0';
    ch2[0]='\0';
    for(int i = 0; i < word1Size; i++){
      strcat(ch1,word1[i]);
    }
    for(int i = 0; i < word2Size; i++){
      strcat(ch2,word2[i]);
    }
    int q = strcmp(ch1,ch2);
    if(q == 0)
    return true;
    return false;
}