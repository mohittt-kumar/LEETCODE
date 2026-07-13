class Solution {
public:
    vector<int>parent,size;
    int find(int u){
        if(parent[u]==u)return u;
        parent[u]=find(parent[u]);
        return parent[u];

    }
    void union1(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(size[a]>size[b]){
            size[a]+=size[b];
            parent[b]=a;
        }else{
            size[b]+=size[a];
            parent[a]=b;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
        parent.resize(n);
        size.resize(n, 1);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
                    union1(i,j);
                }
            }
        }int count=0;
        for(int i=0;i<n;i++){
            if(parent[i]==i){
                count++;
            }
        }return count;
    }
};