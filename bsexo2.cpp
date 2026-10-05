#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt=0;
        long long s=0,i=1;
        while(s<=n){
            s+=i;
            cnt++;
            i++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}