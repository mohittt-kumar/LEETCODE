class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int key) {
     int n=a.size();
        int m=b.size();
        vector<int>arr(n+m);
        
        int i=0, j=0,k=0;
        while(i<n && j<m){
            if(a[i]>b[j]){
                arr[k++]=b[j++];
            }else{
                arr[k++]=a[i++];
            }
        }
        
        while(i<n)arr[k++]=a[i++];
        while(j<m)arr[k++]=b[j++];
        
        
        
        return arr[key-1];
    }
};
