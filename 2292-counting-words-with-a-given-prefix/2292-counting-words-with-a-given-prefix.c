int prefixCount(char** words, int wordsSize, char* pref) {
    int l = strlen(pref);
    int sum,sum1=0;
    for(int i = 0 ; i < wordsSize ; i++){
        int k=0,j=0;
       while(k!=l){
        if(words[i][j++]==pref[k++]){
            sum=1;
        }
        else {
            sum=0;
            break;
        }
       }
       sum1+=sum;
    }
    return sum1;
}