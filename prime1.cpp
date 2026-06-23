#include <bits/stdc++.h>

using namespace std;

bool primeGen(int n) {
    // complete the funciton 
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(i<2) continue;
            int x=primeGen(i);
            if(x) cout<<i<<endl;
        }
        cout<<endl;
    }
   
}