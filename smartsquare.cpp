#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr;
bool check(vector<int> a){
    for(int i=0;i<7;i+=3){
        if((a[i]+a[i+1]+a[i+2])%5!=0) return false;
    }
    for(int i=0;i<3;i++){
        if((a[i]+a[i+3]+a[i+6])%5!=0) return false;
    }
    if((a[0]+a[4]+a[8])%5!=0) return false;
    if((a[2]+a[4]+a[6])%5!=0) return false;
    return true;
}
void permut(vector<bool> vis,vector<int> v,int idx){
    if(idx==9){
        if(check(v))
       {
         arr.push_back(v);
       }
        return;
    }
    for(int i=1;i<=9;i++)
    {
         if(vis[i]!=true){
            v[idx]=i;
            vis[i]=true;
            permut(vis,v,idx+1);
            vis[i]=false;
        }
    }
}
long long cost(vector<int> mat){
    long long mn=INT_MAX;
    for(int i=0;i<arr.size();i++){
        long long sum=0;
        for(int j=0;j<9;j++){
            sum+=abs(mat[j]-arr[i][j]);
        }
        mn=min(mn,sum);
    }
    return mn;

}
int main() {
    int t;
    cin>>t;
    vector<bool>vis(10,false);
    vector<int> mat(9);
    permut(vis,mat,0);
    while(t--){
      vector<int> mat(9);
        for(int i=0;i<9;i++){
            cin>>mat[i];
        }
     long long res=cost(mat);
     cout<<res<<endl;
    } 
    return 0;
}