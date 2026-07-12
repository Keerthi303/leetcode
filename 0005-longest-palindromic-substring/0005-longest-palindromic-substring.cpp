class Solution {
public:
    string is_odd(string s,int n,int idx){
        int l = idx-1,r = idx+1;
        string ans = "";
        ans += s[idx];
        while(l >=0 && r < n){
            if(s[l] != s[r]) return ans;
            else {
                ans += s[l];
                ans.insert(ans.begin(),s[l]);
            }
            l--;
            r++;
        }
        return ans;
    }
    string is_even(string s,int n,int idx,int l,int r){
        string ans = "";
        ans += s[idx];
        ans += s[idx];
        while(l >=0 && r < n){
            if(s[l] != s[r]) return ans;
            else {
            ans += s[l];
            ans.insert(ans.begin(),s[l]); 
            }
            l--;
            r++;
        }
        return ans;
    }
    string longestPalindrome(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            string tempAns1,tempAns2,tempAns3;
             tempAns1 = is_odd(s,s.size(),i);
            if(i > 0 && s[i-1] == s[i]){
            tempAns2 = is_even(s,s.size(),i,i-2,i+1);
            } 
             if( i < s.size() && s[i+1] == s[i]){
            tempAns3 = is_even(s,s.size(),i,i-1,i+2);
            } 
            if((tempAns1.size() > ans.size() )&&(tempAns1.size() > tempAns2.size()) && (tempAns1.size() > tempAns3.size())) 
            ans = tempAns1;
            else if(tempAns2.size() > ans.size() &&tempAns2.size() >tempAns1.size() && tempAns2.size() > tempAns3.size()) ans = tempAns2;
            else if(tempAns3.size() > ans.size() &&tempAns3.size() >tempAns1.size() && tempAns2.size() < tempAns3.size()) ans = tempAns3;
        }
        return ans;
    }
};