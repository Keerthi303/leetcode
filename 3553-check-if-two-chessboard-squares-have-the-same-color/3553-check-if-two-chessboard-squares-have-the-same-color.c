bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    int c1= (coordinate1[0]-'a')+(coordinate1[1]-'0');
     int c2= (coordinate2[0]-'a')+(coordinate2[1]-'0');
     if((c1+c2)%2==0) return true;
     if((c1+c2)%2!=0)return false;
     return 0;
}