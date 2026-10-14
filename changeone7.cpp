#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a.begin(),a.end());
	   // for(int i=)
	    int x=a[n-2];
	    int mn=*std::min_element(a.begin(), a.end());
	    int mx=*std::max_element(a.begin(), a.end());
	    
	    int ans=min({mx-a[1],x-mn});
	    cout<<ans<<endl;
	}

}
