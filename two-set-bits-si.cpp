#include <bits/stdc++.h>
using namespace std;

long long findBlock(long long n){
    long long l=0,h=1e9,ans=0;
    while(l<=h){
        long long m=(l+h)/2;
        if((m*(m+1))/2>=n){
            ans=m;
            h=m-1;
        }
        else l=m+1;

    }
    return ans;
}
long long powerOf2(long long a,long long b){
    long long m=1e9+ 7;
    long long ans=1;
    while(b!=0){
        if((b&1)==1){
            ans=(ans*a)%m;
        }
    a=(a*a)%m;
    b>>=1;
}
return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mod=1e9+7;
        long long block=findBlock(n);
        long long pos = n-(block * (block-1))/2;
        long long bitpos=pos-1;
        long long ans=(powerOf2(2,block) + powerOf2(2,bitpos))%mod;
        cout<<ans<<endl;
    }
    return 0;
}