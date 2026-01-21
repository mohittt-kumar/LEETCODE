class Solution {
public:
    int reverse(int x) {
        long long n = x;   // convert first
        long long sum = 0;

        while (n != 0) {
            int rem = n % 10;
            sum = sum * 10 + rem;
            n /= 10;
        }

        if (sum > INT_MAX || sum < INT_MIN)
            return 0;

        return (int)sum;
    }
};
