#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int mn=1e9+8,ans=-1;
	    for(int i=0;i<n;i++){
	        if(k%a[i]==0){
	           
	            if(mn>(k/a[i])){
	                mn=k/a[i];
	                ans=a[i];
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
}
