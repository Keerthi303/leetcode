class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int cap = target;
        for (int i = 0; i < numbers.size(); i++) {
            cap = cap-numbers[i];
            if(binary_search((numbers.begin()+(i+1)),numbers.end(),cap)){
                res.push_back(i+1);
                auto j = lower_bound(numbers.begin()+(i+1),numbers.end(),cap);
                if(*j == cap){
                res.push_back(j-numbers.begin()+1);
                return res;
                }
            }
            else cap = target;
        }
        return res;
    }
};