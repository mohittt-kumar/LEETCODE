class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle1;
        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=triangle1[i-1][j-1]+triangle1[i-1][j];
            }
            triangle1.push_back(row);
        }return triangle1;
    }
};
