class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        int ans;
        if(n <3) return n;

        for(int i = 3;i<=n;i++){
            ans = a + b;
            int temp = b;
            b = ans;
            a = temp;
        }

        return ans;
    } 
};