class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1,ans2;
        int i=0,j=0;
        while(i<word1.size()){
            ans1+=word1[i];
            i++;
        }
        while(j<word2.size()){
            ans2+=word2[j];
            j++;
        }
        if(ans1.size()!=ans2.size()){
            return false;
        }
        for(int i=0;i<ans1.size();i++){
            if(ans1[i]!=ans2[i]){
                return false;
            }
        }
        return true;
    }
};