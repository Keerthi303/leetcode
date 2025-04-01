
char * defangIPaddr(char * address){
 int l = strlen(address);
 int s=0;
 for(int i = 0 ; address[i] != '\0'; i++){
    if(address[i]=='.')s++;
 }
 char *a1 = (char*)malloc(((2*s)+l+1)*sizeof(char));
 int k=0;
 for(int i = 0 ; i < l ; i++ ){
    if(address[i]=='.'){
        a1[k++]='[';
        a1[k++]='.';
        a1[k++]=']';
    }
    else
    a1[k++]=address[i];
 }
 a1[k]='\0';
 return a1;
}