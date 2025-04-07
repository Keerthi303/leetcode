bool checkIfPangram(char* sentence) {
    int dc[26]={0};
    for(int i=0;sentence[i]!='\0';i++){
      dc[sentence[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(dc[i]==0){
            return false;
        }
    }
    return true;
}