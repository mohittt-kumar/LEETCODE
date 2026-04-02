class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans = 1;

        row.push_back(1);

        for(int i = 1; i <= rowIndex; i++){
            ans = ans * (rowIndex - i + 1);
            ans = ans / i;
            row.push_back(ans);
        }

        return row;
    }
};
