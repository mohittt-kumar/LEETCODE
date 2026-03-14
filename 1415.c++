class Solution {
public:
    string ans="";
    int count=0;

    void backtrack(int n,int k,string &temp){
        if(temp.size()==n){
            count++;
            if(count==k){
                ans=temp;
            }
            return;
        }

        for(char ch='a'; ch<='c'; ch++){
            if(temp.empty() || temp.back()!=ch){
                temp.push_back(ch);
                backtrack(n,k,temp);
                temp.pop_back();
            }
            if(ans!="") return;
        }
    }

    string getHappyString(int n, int k) {
        string temp="";
        backtrack(n,k,temp);
        return ans;
    }
};
