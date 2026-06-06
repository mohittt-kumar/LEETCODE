#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long solve(string s) {
        long long sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';
            int pos = i + 1;  // 1-based position

            int val = digit * pos;

            if (val % 2 == 0) {
                sum += val;
            } else {
                sum -= val;
            }
        }

        return sum;
    }
};
