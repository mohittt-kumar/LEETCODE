class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)return 1;
        string ans="";
        int x=n;
        int rem;
        while(x){
            rem=x%2;
            ans+=(rem + '0');
            x/=2;
        }
        string res="";
        for(int i=ans.size()-1;i>=0;i--){
            res+=ans[i];
        }

        for(int i=0;i<res.size();i++){
            if(res[i]=='0'){
                res[i]='1';
            }else{
                res[i]='0';
            }
        }


        int sum=0;
        for(int i=0;i<res.size();i++){
            sum=sum*2+(res[i]-'0');
        }
        return sum;
    }
};
