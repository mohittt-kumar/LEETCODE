class Solution {
public:
    int mirrorDistance(int n) {
        int sum=0;
        int rem;
        int x=n;
        while(x){
            rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return abs(n-sum);
    }
};
