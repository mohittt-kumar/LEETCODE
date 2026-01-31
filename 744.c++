class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char ch;
        for(int i=0;i<n;i++){
            ch=letters[i];
            if(ch>target){
                return ch;
            }
        }return letters[0];
    }
};
