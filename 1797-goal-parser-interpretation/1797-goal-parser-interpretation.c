
char * interpret(char * command){
   int l = strlen(command);
char *ch = (char*)malloc(2*(l+1)*sizeof(char));
ch[0]='\0';
int k=0,i=0;
while(1){
    if(command[i]=='G'){
        ch[k++]=command[i];
        i++;
    }
    else if(command[i]=='('&&command[i+1]==')'){
        ch[k++]='o';
        i+=2;
    }
    else {
            ch[k++]='a';
            ch[k++]='l';
            i+=4;
    }
    if(i==l)break;
}
ch[k]='\0';
return ch;
}