class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";

        // step 1: convert letters to numbers
        for (char c : s) {
            num += to_string(c - 'a' + 1);
        }

        int result = 0;

        // step 2: repeat digit sum k times
        while (k--) {
            result = 0;
            for (char c : num) {
                result += (c - '0');
            }
            num = to_string(result);
        }

        return stoi(num);
    }
};
