class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())return false;
        if(s==goal){
            vector<int>ans(26,0);
            for(char ch:s){
                ans[ch-'a']++;

                if(ans[ch-'a']>=2){
                    return true;
                }

            }
            return false;
        }

        vector<int>freq;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                freq.push_back(i);
            }
        }
        if(freq.size()!=2)return false;


        return s[freq[0]]==goal[freq[1]] && s[freq[1]]==goal[freq[0]];

    }
};