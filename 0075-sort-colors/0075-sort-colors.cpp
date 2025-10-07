class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int end){
        int i = start;
        int j = mid+1;
        vector<int> b(end-start+1);
        int k =0;
        while(i <= mid&& j <=end){
            if(nums[i] < nums[j]) b[k++] = nums[i++];
            else b[k++] = nums[j++];
        }
        while(i<=mid) b[k++] = nums[i++];
        while(j<=end) b[k++] = nums[j++];
         k = 0;
        for(int i = start;i <= end;i++){
            nums[i] = b[k++];
        }
    }

    void mergeSort(vector<int> &nums,int i,int j){
        int mid = (i+j)/2;
        if(i >= j) return;
        mergeSort(nums,i,mid);
        mergeSort(nums,mid+1,j);
        merge(nums,i,mid,j);
        
    }
    void sortColors(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
    }
};