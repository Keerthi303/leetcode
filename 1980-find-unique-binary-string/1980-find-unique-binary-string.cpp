class Solution {
public:
    int toNum(string s){
        int base = 0;
        int ans =0;
        for(int i = s.size()-1; i >= 0;i--){
            if(s[i] == '1') ans += pow(2,base);
            base++;

        }
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<int>N;
        for(int i = 0; i < nums.size(); i++){
            N.push_back(toNum(nums[i]));
        }
        sort(N.begin(),N.end());
        int i = 0;
        for(int j = 0; j < N.size();j++){
            string t = format("{:016b}",i);
            if(i != N[j]) return t.substr(16-nums.size());
            i++;
        }
        string t = format("{:016b}",i);
        return t.substr(16-nums.size());
    }
};