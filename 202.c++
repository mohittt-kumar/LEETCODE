class Solution {
public:
    bool isHappy(int n) {
        int remender;
        int sum=0;
        if(n==1 || n==7)return true;
        if(n<10)return false;
        int original=n;
        while(n){
            remender=n%10;
            sum+=remender*remender;
            n/=10;
        }
        return isHappy(sum);
    }
};
