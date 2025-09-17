class Solution {
public:
    void subsequence(int ind,vector<int> &a,vector<int> &ds,vector<vector<int>> &res,int n){
       if(ind  >= n){
        res.push_back(ds);
        return ;
       }
       ds.push_back(a[ind]);
       subsequence(ind+1,a,ds,res,n);
       ds.pop_back();
       subsequence(ind+1,a,ds,res,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        subsequence(0,nums,ds,res,nums.size());
        return res;
    }
};