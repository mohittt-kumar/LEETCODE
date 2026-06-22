class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>ans(26,0);
        for(int i=0;i<text.size();i++){
            ans[text[i]-'a']++;
        }
        return min({ans['b'-'a'], ans['a'-'a'],ans['l'-'a']/2, ans['o'-'a']/2, ans['n'-'a']});
    }
};
