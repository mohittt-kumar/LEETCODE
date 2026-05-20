class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int index=0,count=0;
        while(index<s.size()){
            if(s[index]==' '){
                int pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
                index++;
            }else{
                temp+=s[index++];
            }
        }int pos=temp[temp.size()-1]-'0';
         temp.pop_back();
         ans[pos]=temp;
        temp.clear(); // important

         for(int i=1;i<=count+1;i++){
            temp+=ans[i];
            if(i!=count+1)
                temp+=' ';
         }
         return temp;
    }
};
