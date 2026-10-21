#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    vector<int> a(n),b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(abs(a[i]-b[i])<=k){
	            cnt++;
	        }
	    }
	    if(cnt>=x){
	        cout<<"YES\n";
	    }else cout<<"NO\n";
	}

}
