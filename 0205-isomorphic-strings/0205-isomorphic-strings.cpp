class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()<t.size() || s.size()>t.size()){
            return false;
        }
        vector<int>s1(256,0);
        vector<int>t1(256,0);

        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];

            if(s1[c1]==0 && t1[c2]==0){
                s1[c1]=c2;
                t1[c2]=c1;
            }else if(s1[c1]!=c2 || t1[c2]!=c1){
                return false;
            }
        }
        return true;
    }
};