class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<=right){
            if(s[left]=='A' ||s[left]=='E'||s[left]=='I'||s[left]=='O'||s[left]=='U'||s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                if(s[right]=='A'||s[right]=='E'||s[right]=='I'||s[right]=='O'||s[right]=='U'||s[right]=='a'||s[right]=='a'||s[right]=='e'||s[right]=='o'||s[right]=='i'||s[right]=='u'){
                    swap(s[left],s[right]);
                    left++,right--;
                }else{
                    right--;
                }
            }else{
                left++;
            }
        }
        return s;
    }
};