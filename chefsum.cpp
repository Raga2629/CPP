#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    vector<long long>pre(n),suf(n);
	    pre[0]=a[0];
	    suf[n-1]=a[n-1];
	    for(int i=1;i<n;i++){
	        pre[i]=pre[i-1]+a[i];
	    }
	    for(int i=n-2;i>=0;i--){
	        suf[i]=suf[i+1]+a[i];
	    }
	    long long s=0,mn=1e18,mnidx=0;
	    for(int i=0;i<n;i++){
	        s=pre[i]+suf[i];
	        if(s<mn){
	            mn=s;
	            mnidx=i;
	        }
	    }
	    cout<<mnidx+1<<endl;
	}

}
