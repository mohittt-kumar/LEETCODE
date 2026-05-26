class Solution {
  public:
    int findSubString(string& str) {
        // code here
        vector<int>ans(256,0);
        int first=0, second=0, len=str.size(), diff=0;
        while(first<str.size()){
            if(ans[str[first]]==0){
                diff++;
            }
            ans[str[first]]++;
            first++;
        }
        for(int i=0;i<256;i++)
            ans[i]=0;
        
            first=0;
            
            
        while(second<str.size()){
            while(diff && second<str.size()){
                if(ans[str[second]]==0)diff--;
                
                ans[str[second]]++;
                second++;
            }
            len=min(len,second-first);
            
            while(diff==0){
                len=min(len,second-first);
            
                ans[str[first]]--;
            
                if(ans[str[first]]==0){
                    diff++;
                }
            
                first++;
            }
        }
        return len;
    }
};
