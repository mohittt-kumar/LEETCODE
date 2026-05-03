class Solution {
public:
    int isprime(int n,int sum){
        int first=min(n,sum);
        int last=max(sum,n);
        int ans=0;
        
        for(int i=first;i<=last;i++){
            int count =0;
            if (i==1)continue;
            for(int j=2;j*j<=i;j++){
                if(i%j==0)count++;
            }
            if(count==0){
                ans+=i;
            }
        }return ans;
    }
    int sumOfPrimesInRange(int n) {
        int x=n;
        int rem,sum=0;
        while(x){
            rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return isprime(n,sum);
    }
};
