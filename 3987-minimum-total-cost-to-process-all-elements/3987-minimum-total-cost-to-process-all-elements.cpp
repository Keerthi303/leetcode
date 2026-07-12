class Solution {
public:
    int MOD = 1e9+7;
    void giveRes(int n,int &res,int k,long long&ops){
       int needed = n-res;
        ops = ops + ((needed%k == 0) ?( (needed/k)) :((needed/k)+1));
        res = res+((needed%k == 0) ?( (needed/k)*k) :((needed/k)+1)*k);
        res -= n;
    }
    int minimumCost(vector<int>& nums, int k) {
        int res = k;
        long long ops = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] <= res) res -= nums[i];
            else{
               giveRes(nums[i], res,k,ops);
            }
        }
        return (((ops%MOD)*((ops+1)%MOD)/2))% MOD ;
    }
};