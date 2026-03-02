class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> zeros(n);

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = n - 1; j >= 0 && grid[i][j] == 0; j--) count++;
            zeros[i] = count;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            int needed = n - i - 1;
            int j = i;
            while (j < n && zeros[j] < needed) j++;
            if (j == n) return -1;
            while (j > i) {
                swap(zeros[j], zeros[j - 1]);
                j--;
                swaps++;
            }
        }

        return swaps;
    }
};





   OR 

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>trailing(n);

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0){
                    count++;
                }else{
                    break;
                }
            }
            trailing[i]=count;
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            int req=n-i-1;
            int j=i;
            while(j<n && trailing[j]<req)
                j++;
            
            if(j==n)return -1;

            while(j>i){
                swap(trailing[j],trailing[j-1]);
                swaps++;
                j--;
            }
        }return swaps;
    }
};
