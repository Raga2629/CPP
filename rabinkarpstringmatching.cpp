#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        int p=31;
        long long p1=1,p2=1,cnt=0;
       if(n>m){
        cout<<0<<endl;
        continue;
       }
       long long ha=0,hb=0;
        long long mod=1e9+7;
        for(int i=0;i<n;i++){
            ha=(ha+(a[i]-'a'+1)*p1)%mod;
            hb=(hb+(b[i]-'a'+1)*p1)%mod;
            p1=(p1*p)%mod;
        }
        if(ha==hb){
            cnt+=1;
        }
        long long inv=129032259;
        for(int i=0;i<m-n;i++){
            hb=(hb - (b[i] -'a'+1)*p2 +mod)%mod;
            
            hb=(hb*inv)%mod;

            hb=(hb + (b[i+n]-'a'+1)*(p1*inv%mod))%mod;

           
            if(ha==hb){
                cnt++;
            }
            // p1=(p1*p)%mod;
            // p2=(p2*p)%mod;
        }
        cout<<cnt<<endl;

    }    
    return 0;
}