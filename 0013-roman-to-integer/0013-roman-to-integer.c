int romanToInt(char* s) {
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X')) c-=1;
        else if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')) c-=10;
        else if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M'))c-=100;
        else if(s[i]=='I') c++;
       else if(s[i]=='V') c+=5;
      else  if(s[i]=='X') c+=10;
      else if(s[i]=='L') c+=50;
      else if(s[i]=='C') c+=100;
       else if(s[i]=='D') c+=500;
       else if(s[i]=='M') c+=1000;
    }
    return c;
}