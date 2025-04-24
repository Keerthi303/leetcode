char findTheDifference(char* s, char* t) {
    int dc1[26],dc2[26];
    char ch;
    for(int i=0;s[i]!='\0';i++){
        dc1[s[i]-'a']++;
    }
    for(int i=0;t[i]!='\0';i++){
        dc2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
       if(dc2[i]!=0){
        if(dc2[i]!=dc1[i]){
          return ('a'+i);  
        }
       }
    }
    return 0;
    }
