#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    int idx=k;
	   int ans=0;
	    vector<int> t=a;
	    sort(a.begin(),a.end());
	    for(int i=0;i<n;i++){
	        if(a[i]==t[idx-1]){
	        ans=i+1;
	        break;
	        }
	    }
	    cout<<ans<<endl;
	}

}
