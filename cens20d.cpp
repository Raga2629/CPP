#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<vector<int>> b(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j]=(a[i]&a[j]);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && b[i][j]==a[i]){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

}
