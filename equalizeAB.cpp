#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
        
        if(abs(b-a)%(2*x)==0){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
