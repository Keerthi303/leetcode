class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans = letters[0];
        sort(letters.begin(),letters.end());
        for( auto a : letters){
          if(a > target) return a;
        }
        return ans;
    }
};