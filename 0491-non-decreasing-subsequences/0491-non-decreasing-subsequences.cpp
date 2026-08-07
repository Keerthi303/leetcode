class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n  = nums.size();
        vector<int> dec;
        vector<vector<int>>ans;
        set<vector<int>>s;

        for(int i = 0; i < (1 << n);i++){
            // int sz = dp.size();
            int flag = 0;
            vector<int>v;
            for(int j = 0; j < n;j++){
                 if((i &( 1 << j)) == 0 ){
                     if(v.size() != 0 && v.back() > nums[j]) { 
                        flag = -1;
                        break;
                        }
                    v.push_back(nums[j]);
                 } 
            }
            int t = s.size();
            if(flag == 0)
            s.insert(v);

            if(v.size() >= 2 && flag == 0 && t != s.size())
            ans.push_back(v);
        }
        // vector<vector<int>>a;
        // int i = 0;
        // for( auto seq : s){
        //     if(  seq.second == 0 && seq.first.size() >= 2 )a.push_back(seq.first);
        //     i++;
        // }
        return ans;
    }
};