/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int find(char s[],int index,char ch){
    int front=0,back=0;
    for(int i=index;s[i]!='\0';i++){
        if(ch==s[i]) return abs(i-index);
    }
      return -1;
 }
 int find1(char s[],int index,char ch){
    for(int i=index;i>=0;i--){
        if(ch==s[i])   return abs(index-i);
    }
    return -1;
 }
int* shortestToChar(char* s, char c, int* returnSize) {
    int l=strlen(s);
    *returnSize = l;
    int k =0;
    int *a = (int*)malloc(l*sizeof(int));
    int j=0;
    for(int i=0;s[i]!='\0';i++){
     int n=find(s,i,c);
     int m=find1(s,i,c);
     if(n==-1) a[k++]=m;
     else if(m==-1) a[k++]=n;
     else a[k++]=(m>n)?n:m;
        }
    return a;
}