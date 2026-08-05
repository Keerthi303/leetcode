class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>freq;
        
        for(int i = 0; i < words.size(); i++){
            int f = 0;
            for(int j = 0; j < words[i].size(); j++){
                int temp = 1 << words[i][j]-'a'+1;
                f = f | temp;
            }
            freq.push_back(f);
        }
        int prod = INT_MIN;
        for(int i = 0; i < words.size(); i++){
            for(int j = i+1; j < words.size(); j++){
               if((freq[i] & freq[j]) == 0){
                int l = words[i].size(),k = words[j].size();
                    prod = max(prod,l*k);
                    
               }
            }
        }
        if(prod == INT_MIN) return 0;
        return prod;

    }
};