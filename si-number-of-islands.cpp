#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &graph,int i,int j,vector<vector<bool>>&vis,int r,int c){
    vector<int> d1={-1,-1,-1,0,0,1,1,1};
    vector<int> d2={-1,0,1,-1,1,-1,0,1};
    queue<int> q1,q2;
    int n=graph.size();
    q1.push(i);
    q2.push(j);
    vis[i][j]=true;
    while(!q1.empty() && !q2.empty()){
        int ci=q1.front();
        q1.pop();
        int cj=q2.front();
        q2.pop();
        for(int k=0;k<8;k++){
            int ni=ci+d1[k];
            int nj=cj+d2[k];
            if(ni>=0 && ni<r && nj>=0 && nj<c && graph[ni][nj]==1 && !vis[ni][nj]){
                vis[ni][nj]=true;
                q1.push(ni);
                q2.push(nj);
                
            }
        }
        
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> graph(n,vector<int>(m));
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<m;j++)
                graph[i][j]=s[j]-'0';            
        }
        int cnt=0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( graph[i][j]==1 && !vis[i][j] ){
                    cnt++;
                    bfs(graph,i,j,vis,n,m);
                }
            }
        }
        cout<<cnt<<endl;
    }  
    return 0;
}