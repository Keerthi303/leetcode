int removeDuplicates(int* nums, int numsSize) {
   int k=1;
   int key=nums[0];
   int *a = (int*)malloc(numsSize*sizeof(int));
   
 a[0]=nums[0];
 int i=1;
while( i != numsSize){
   if(key!=nums[i]){
    a[k++]=nums[i];
   }
   key=nums[i++];
   }
   for(int j=0;j<k;j++){
    nums[j]=a[j];
   }
return k;
}