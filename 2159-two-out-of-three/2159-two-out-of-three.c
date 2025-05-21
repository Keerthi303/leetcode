/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize) {
int dc[101]={0},dc1[101]={0},dc2[101]={0};
for(int i=0;i<nums1Size;i++){
    dc[nums1[i]]=1;
}
for(int i=0;i<nums2Size;i++){
    dc1[nums2[i]]=1;
}
for(int i=0;i<nums3Size;i++){
    dc2[nums3[i]]=1;
}
int *a = (int*)malloc(101*sizeof(int));
int l=0;
for(int i=0;i<101;i++){
    if(dc[i]+dc1[i]+dc2[i]>=2){
        a[l++]=i;
    }
}
  *returnSize = l;
    return a;
}