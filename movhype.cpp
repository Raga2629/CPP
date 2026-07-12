#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n+1);
	    for(int i=0;i<=n;i++){
	        cin>>a[i];
	    }
	   
	    int mx=max(a[0],a[1]),mn=mx;
	    for(int i=1;i<n;i++){
	        mx=max(a[i],a[i+1]);
	        mn=min(mn,mx);
	    }
	  
	    cout<<mn<<endl;
	}

}
