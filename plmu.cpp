#include <bits/stdc++.h>
using namespace std;
long long ncr(long long n,long long r){
    if(n==0 || n<r ) return 0;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        unordered_map<long long,long long> f;
        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }
       int x=(f[2]*(f[2]-1))/2;
       int y=(f[0]*(f[0]-1))/2;
       cout<<x+y<<endl;
        
    }

}
