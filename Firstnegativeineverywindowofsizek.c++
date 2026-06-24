class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int>ans;
        queue<int>q;
        int n=arr.size();
        int i=0,j=0;
        while(j<n){
            if(arr[j]<0)q.push(arr[j]);
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                if(!q.empty()){
                    ans.push_back(q.front());
                }else{
                    ans.push_back(0);
                }
                 if(arr[i]==q.front() && !q.empty()){
                    q.pop();
                }
                i++;
                j++;
            }
        }return ans;
    }
};
