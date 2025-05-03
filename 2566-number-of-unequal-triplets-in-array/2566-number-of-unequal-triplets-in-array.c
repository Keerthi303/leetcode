int unequalTriplets(int* a, int numsSize) {
    int sum = 0;
  for(int i=0;i<numsSize-2;i++){
    for(int j=i;j<numsSize-1;j++){
        if(a[i]==a[j]){continue;}
        for(int k=j;k<numsSize;k++){
            if(a[j]==a[k]||a[k]==a[i]){continue;}
            sum++;
        }
    }
  }
 
    return sum;
}