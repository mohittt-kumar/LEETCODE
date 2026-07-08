class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();
        int m=maze[0].size();
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int rc[]={1,-1,0,0};
        int cc[]={0,0,1,-1};
        int path=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto it=q.front();
                q.pop();

                int r=it.first;
                int c=it.second;
                 if ((r == 0 || r == n - 1 || c == 0 || c == m - 1) &&
                    !(r == entrance[0] && c == entrance[1])) {
                    return path;
                }
                for(int i=0;i<4;i++){
                    int nr=r+rc[i];
                    int nc=c+cc[i];

                    if(nr>=0&& nc>=0 && nr<n && nc<m && maze[nr][nc]=='.'){
                        maze[nr][nc]='+';
                        q.push({nr,nc});
                    }
                }
            }path++;
        }return -1;
    }
};