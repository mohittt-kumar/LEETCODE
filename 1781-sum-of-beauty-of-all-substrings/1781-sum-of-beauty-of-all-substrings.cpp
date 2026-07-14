class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            vector<int>res(26,0);
            for(int j=i;j<n;j++){
                res[s[j]-'a']++;

                int maxi=0;
                int mini=INT_MAX;

                for(int k=0;k<26;k++){
                    if(res[k]>0){
                        maxi=max(maxi,res[k]);
                        mini=min(mini,res[k]);
                    }
                }
                sum+=(maxi-mini);
            }
        }return sum;
    }
};