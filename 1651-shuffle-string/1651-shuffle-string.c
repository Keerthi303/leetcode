char* restoreString(char* s, int* indices, int indicesSize) {
    char *ch = (char*)malloc((indicesSize+1)*sizeof(char));
    for(int i=0;i<indicesSize;i++){
        ch[indices[i]]=s[i];
    }
    ch[indicesSize]='\0';
    return ch;
}