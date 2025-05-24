/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **a = (char**)malloc((n+1)*sizeof(char*));
    for(int i=1;i<=n;i++){
      if(i%3==0&&i%5==0){
       a[i-1] = (char*)malloc(9*sizeof(char));
       strcpy(a[i-1],"FizzBuzz");
      }
      else if(i%3==0){
         a[i-1] = (char*)malloc(5*sizeof(char));
        strcpy(a[i-1],"Fizz");
      }
       else if(i%5==0){
         a[i-1] = (char*)malloc(5*sizeof(char));
      strcpy(a[i-1],"Buzz");
      }
      else {
        a[i-1] = (char*)malloc(12*sizeof(char));
        char ch = i+'0';
       sprintf(a[i-1],"%d",i);
      }
    }
    *returnSize = n;
    return a;
}