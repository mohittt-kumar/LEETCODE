class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int srow=0,scol=0;
        int erow=n-1, ecol=m-1;
        while(srow<=erow && scol<=ecol ){
            //top
            for(int s=scol;s<=ecol;s++){
                ans.push_back(matrix[srow][s]);
            }
            //right
            for(int s=srow+1;s<=erow;s++){
                ans.push_back(matrix[s][ecol]);
            }
            //bottom
            for(int s=ecol-1;s>=scol;s--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][s]);
            }
            //left
            for(int s=erow-1;s>=srow+1;s--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[s][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }return ans;
    }
};
