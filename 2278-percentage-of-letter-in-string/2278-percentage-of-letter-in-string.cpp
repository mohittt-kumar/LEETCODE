class Solution {
public:
    int percentageLetter(string s, char letter) {
        int i=0;
        int count=0;
        while(i<s.size()){
            if(s[i]==letter){
                count++;
            }
            i++;
        }
        return (count*100)/s.size();
    }
};