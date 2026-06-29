class Solution {
public:
    char kthCharacter(int k) {
        if(k==1)return 'a';
         int n=1;
         while(n<k){
            n=n*2;
         }
         int mid=n/2;
         if(k<=mid){
            return kthCharacter(k);
         }else{
         char c=kthCharacter(k-mid);
            return c=='z'?'a':c+1;
         }
    }
};
