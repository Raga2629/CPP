#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a.begin(),a.end());
	    int i=0,j=n-1;
	    bool ans=false;
	    while(i<j){
	        if(a[i]+a[j]==k){
	            ans=true; break;
	        }else if(a[i]+a[j]<k){
	            i++;
	        }else{
	            j--;
	        }
	    }
	    if(ans) cout<<"Yes\n";
	    else cout<<"No\n";
	    
	}

}
