class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s = s + s;

        int diff1 = 0, diff2 = 0, ans = n;

        for(int i = 0; i < 2*n; i++){
            if(s[i] != (i%2 ? '1' : '0')) diff1++;
            if(s[i] != (i%2 ? '0' : '1')) diff2++;

            if(i >= n){
                if(s[i-n] != ((i-n)%2 ? '1' : '0')) diff1--;
                if(s[i-n] != ((i-n)%2 ? '0' : '1')) diff2--;
            }

            if(i >= n-1)
                ans = min(ans, min(diff1, diff2));
        }

        return ans;
    }
};
