class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string word=strs[0];
        string last=strs[strs.size()-1];
        int i=0,j=0;
        while(i<word.size() && j<last.size()){
            if(word[i]==last[j]){
                ans+=word[i];
            }else{
                break;
            }
            i++;
            j++;
        }return ans;
    }
};