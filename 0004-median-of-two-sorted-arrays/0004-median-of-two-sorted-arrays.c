double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
  int *b = (int*)malloc((nums1Size+nums2Size)*sizeof(int));
  int i=0;
  int j=0;
  int k=0;
  while(i<nums1Size&&j<nums2Size){
    if(nums1[i]<nums2[j])b[k++]=nums1[i++];
    else b[k++]=nums2[j++];
  }
  while(i<nums1Size)b[k++]=nums1[i++];
  while(j<nums2Size)b[k++]=nums2[j++];
  if(k%2==0) 
  return (double)(b[(k/2)]+b[k/2-1])/2;
  return b[(k/2)];
}