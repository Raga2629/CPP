#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    vector<int> p(n),a(n);
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    bool f=false,d=false;
	    for(int i=0;i<n;i++){
	        if(!f && !d){
	        for(int j=0;j<n;j++){
	            if(a[i]==0 && a[j]==1 && (s+(p[i]+p[j]))<=100){
	                f=true;
	                d=true;
	                break;
	            }
	        }
	        if(f&&d) break;
	        }
	    }
	    if(f && d)
	    cout<<"yes\n";
	    else cout<<"no\n";
	    
	    
	}

}
