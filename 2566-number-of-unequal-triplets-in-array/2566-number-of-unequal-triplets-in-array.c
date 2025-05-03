int unequalTriplets(int* a, int numsSize) {
    int sum = 0;
  for(int i=0;i<numsSize-2;i++){
    for(int j=i;j<numsSize-1;j++){
        for(int k=j;k<numsSize;k++){
            if(a[i]!=a[j]&&a[j]!=a[k]&&a[k]!=a[i])sum++;
        }
    }
  }
 
    return sum;
}