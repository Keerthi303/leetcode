/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int dc[1001]={0};
    int *b = (int*)malloc(nums2Size*sizeof(int));
    int k=0;
    for(int i=0;i<nums1Size;i++){
        dc[nums1[i]]++;
    }
    for(int i=0;i<nums2Size;i++){
       if((dc[nums2[i]])!=0){
        b[k++]=nums2[i];
        dc[nums2[i]]=0;
       }
    }
    *returnSize = k;
    return b;
}