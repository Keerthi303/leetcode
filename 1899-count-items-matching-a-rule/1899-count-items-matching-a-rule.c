int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int index ;
    char s1[]="type",s2[]="color";
    if(strcmp(s1,ruleKey)==0)  index=0;
    else if( strcmp(s2,ruleKey)==0 ) index=1;
    else  index=2;
    int c=0;
    for(int i=0;i<itemsSize;i++){
           if(strcmp(ruleValue,items[i][index])==0) c++;
    }
    return c;
}