#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n),s(n);
        for(int i=0;i<n;i++){
            cin>>p[i]>>s[i];
        }
        int sum=0,mx;
        for(int i=0;i<9;i++){
            mx=0;
            for(int j=0;j<n;j++){
                if(i==p[j] && s[j]>mx){
                    mx=s[j];
                }
            }
            sum+=mx;
        }
        cout<<sum<<endl;
        
    }
}
