int reverseDegree(char* s) {
    int sum = 0;
    for(int i = 0 ; s[i] != '\0' ; i++){
        sum+=((i+1)*(26-(s[i]-'a')));
    }
    return sum;
}