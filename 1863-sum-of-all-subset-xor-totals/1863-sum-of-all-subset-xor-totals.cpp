class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < (1 << n); i++){
            int x = 0;
            for(int j = 0; j < n; j++){
                if((i & (1 << j)) != 0){
                    x ^= nums[j];
                }
            }
            cnt += x;
        }
        return cnt;
    }
};