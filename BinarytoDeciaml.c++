class Solution {
  public:
    int binary_to_decimal(int n) {
        // code here
        long long x=n;
        int sum=0;
        int i=0;
        while(x){
            int rem=x%10;
            sum+=rem*pow(2,i);
            x/=10;
            i++;
        }return sum;
    }
};
