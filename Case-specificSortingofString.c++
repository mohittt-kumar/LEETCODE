class Solution {
  public:
    string caseSort(string& s) {
        
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        
        for(char ch : s){
            
            if(ch >= 'A' && ch <= 'Z'){
                upper[ch - 'A']++;
            }
            else{
                lower[ch - 'a']++;
            }
        }
        
        int l = 0, u = 0;
        string ans = s;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] >= 'A' && s[i] <= 'Z'){
                
                while(upper[u] == 0) u++;
                
                ans[i] = 'A' + u;
                upper[u]--;
            }
            else{
                
                while(lower[l] == 0) l++;
                
                ans[i] = 'a' + l;
                lower[l]--;
            }
        }
        
        return ans;
    }
};
