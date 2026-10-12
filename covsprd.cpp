#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,d;
        cin>>n>>d;
        long long inf=1;
        for(int i=1;i<=d;i++){
            if(i<=10)
            inf=min(n,inf*2);
            else inf=min(n,inf*3);
            if(inf==n) break;
        }
        cout<<inf<<endl;
    }

}
