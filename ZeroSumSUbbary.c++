class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int n=arr.size();
        unordered_map<int , int>mp;
        int total=0;
        mp[0]=1;
        int prefixSum=0;
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            if(mp.count(prefixSum)){
                total+=mp[prefixSum];
                mp[prefixSum]++;
                
            }else{
                mp[prefixSum]=1;
            }
        }return total;
    }
};
