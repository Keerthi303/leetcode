int add(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
int countLargestGroup(int n) {
   int max1=1;
  int a[10000]={0};
  int max=0;
  for(int i=1;i<=n;i++){
  a[add(i)]++;
  if(add(i)>max){
    max=add(i);
  }
  if(a[add(i)]>max1)
  max1++;
  }
  int c=0;
  for(int i=0;i<=max;i++){
    if(a[i]==max1)c++;
  }
  return c;
}