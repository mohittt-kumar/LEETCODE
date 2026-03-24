class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int mod=12345;
        int size=n*m;
        int k=0;
        vector<int>arr(size);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[k++]=grid[i][j];
            }
        }
         vector<long long> prefix(size,1);
        vector<long long> suffix(size,1);

        for(int i=1;i<size;i++){
            prefix[i] = (prefix[i-1] * arr[i-1]) % mod;
        }

        for(int i=size-2;i>=0;i--){
            suffix[i] = (suffix[i+1] * arr[i+1]) % mod;
        }
                vector<vector<int>> ans(n, vector<int>(m));

        k = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = (prefix[k] * suffix[k]) % mod;
                k++;
            }
        }
            return ans;

    }
};
