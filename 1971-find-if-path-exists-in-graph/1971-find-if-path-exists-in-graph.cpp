class Solution {
public:
    vector<int>parent;
    vector<int>size;
    int find(int a){
        if(a==parent[a])return a;
        parent[a]=find(parent[a]);
        return parent[a];
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
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        size.resize(n,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto x:edges)union1(x[0],x[1]);

        return find(destination)==find(source);

    }
};