class Solution {
public:
    int hammingWeight(int n) {
        if(n==0 || n==1)return n;
        int x=n;
        int sum=0;
        while(x){
            int rem=x%2;
            sum=sum+rem;
            x/=2;
        }
        if(x==1){
            sum=sum+x;
        }
        return sum;
    }
};