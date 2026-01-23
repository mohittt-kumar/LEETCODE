class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.length())
            return s;
        
        vector<string> arr(numRows);
        int currRow=0;
        bool down=false;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            arr[currRow]+=c;

            if(currRow==0 || currRow==numRows-1)
                down =!down;

            currRow+=down?1:-1;
        }
        string result;
        for(int i=0;i<arr.size();i++){
            string sr=arr[i];
            result+=sr;
        }return result;
    }
};
