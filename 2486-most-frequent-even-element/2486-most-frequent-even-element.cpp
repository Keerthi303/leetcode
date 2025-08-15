class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> spc;
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                spc[nums[i]]++;
                c++;
            }
        }
        if (c == 0)
            return -1;
        int max = 0, res;
        for (auto i = spc.begin(); i != spc.end(); ++i) {
            if (i->second > max) {
                max = i->second;
                res = i->first;
            }
        }
        return res;
    }
};