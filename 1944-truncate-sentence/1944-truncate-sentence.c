char* truncateSentence(char* s, int k) {
    int c=1;
    for(int i = 0; s[i] != '\0';i++){
        if(s[i]==' ')
        c++;
           if(c>k)s[i]='\0';
    }
    return s;
}