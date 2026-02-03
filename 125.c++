class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string res = "";

        if (s.empty()) return true;

        for (int i = 0; i < n; i++) {
            char c = s[i];
              if (c >= 'A' && c <= 'Z') {
                res += (c + 32); 
            }
            else if (c >= 'a' && c <= 'z') {
                res += c;
            }else if (c >= '0' && c <= '9') {
                res += c;
            }
        }

        string rev = "";
        for (int i = res.size() - 1; i >= 0; i--) {
            rev += res[i];
        }

        return res == rev;
    }
};
