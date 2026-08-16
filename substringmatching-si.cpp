#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    long long mod=1e9+7;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int p=31;
        int n=s1.size(),m=s2.size();
        int x=max(s1.size(),s2.size())+2;
        vector<long long> pp(x,1);
        pp[0]=1;
        for(int i=1;i<x;i++){
            pp[i]=(p*pp[i-1])%mod;
        }
        vector<long long> h1(n,0),h2(m,0);
        h1[0]=((s1[0]-'a'+1)*pp[1])%mod;
        for(int i=1;i<n;i++){
            h1[i]=h1[i-1]+((s1[i]-'a'+1)%mod*pp[i+1]%mod)%mod;
        }
        h2[0]=((s2[0]-'a'+1)*pp[1])%mod;
        for(int i=1;i<m;i++){
            h2[i]=h2[i-1]+((s2[i]-'a'+1)%mod*pp[i+1]%mod)%mod;
        }
        int q;
        cin>>q;
        while(q--){
            int i,j,k,l;
            cin>>i>>j>>k>>l;
            if((j-i)!=(l-k)){
                cout<<"No\n";
                continue;
            }
            long long hash1=(h1[j]-((i>0)?h1[i-1]:0)+mod)%mod;
            long long hash2=(h2[l]-((k>0)?h2[k-1]:0)+mod)%mod;
            long long val1=(hash1*pp[k])%mod;
            long long val2=(hash2*pp[i])%mod;
            
            if(val1==val2){
                cout<<"Yes\n";

            }else cout<<"No\n";


        }
    }  
    return 0;
}