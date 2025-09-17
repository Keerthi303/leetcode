class Solution {
public:
    void subseq(int idx,vector<int> &a,vector<int> &ds,vector<vector<int>> &res,int n,map<vector<int>,int> &mpp){
       if(idx >= n){
        vector<int> temp = ds;
        sort(temp.begin(),temp.end());
        if(mpp.find(temp) != mpp.end() &&mpp[temp] == 1) return;
        res.push_back(temp);
        mpp[temp]++;
        return ;
       }
       // pick
       ds.push_back(a[idx]);
       subseq(idx+1,a,ds,res,n,mpp);
       // non pick
       ds.pop_back();
       subseq(idx+1,a,ds,res,n,mpp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> res;
        map<vector<int>,int> mpp;
        subseq(0,nums,ds,res,nums.size(),mpp);
         return res;
    }
};