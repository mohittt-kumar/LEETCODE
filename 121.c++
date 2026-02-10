class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int cp=prices[0];
        int sp=0;
        for(int i=0;i<n;i++){
            if(prices[i]>cp){
                sp=max(sp,prices[i]-cp);
            }else{
                cp=prices[i];
            }
        }return sp;
    }
};
