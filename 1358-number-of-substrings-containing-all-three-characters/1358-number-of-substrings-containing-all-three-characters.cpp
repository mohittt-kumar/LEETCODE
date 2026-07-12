class Solution {
public:
    int numberOfSubstrings(string s) {
        int first=0, res=0;
        vector<int>ans(3,0);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;

            while(ans[0]>0 && ans[1]>0 && ans[2]>0){
                res+=s.size()-i;
                ans[s[first]-'a']--;
                first++;
            }
        }
        return res;
    }   
};