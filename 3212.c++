class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> X(n+1,vector<int>(m+1,0));
        vector<vector<int>> Y(n+1,vector<int>(m+1,0));

        int count = 0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                X[i][j] = X[i-1][j] + X[i][j-1] - X[i-1][j-1];
                Y[i][j] = Y[i-1][j] + Y[i][j-1] - Y[i-1][j-1];

                if(grid[i-1][j-1]=='X')
                    X[i][j]++;

                if(grid[i-1][j-1]=='Y')
                    Y[i][j]++;

                if(X[i][j] == Y[i][j] && X[i][j] > 0)
                    count++;
            }
        }

        return count;
    }
};
