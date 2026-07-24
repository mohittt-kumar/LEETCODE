class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;

        while(i<s.size()&& j<s.size()){
            j=i;
            while(j<s.size()&&s[j]!=' '){
                j++;
            }int left=i;
            int cur=j-1;
            while(left<cur){
                swap(s[left],s[cur]);
                left++,cur--;
            }
            i=j+1;         
        }return s;
    }
};