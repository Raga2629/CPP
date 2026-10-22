class Solution {
public:
    void dfs(int s,const vector<vector<int>>& edges, vector<bool> &vis){
        vis[s]=true;
        for(int i=0;i<edges[s].size();i++){
            if(!vis[edges[s][i]]){
                dfs(edges[s][i],edges,vis);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(const auto&edge : edges){
            int u=edge[0];
            int v=edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> vis(n,false);
        dfs(source,graph,vis);
        return vis[destination];
        
    }
};