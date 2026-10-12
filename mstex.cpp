#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    int sum=0;
	    for(int i=n-k;i<n;i++){
	        sum+=a[i];
	    }
	    cout<<sum<<endl;
	}

}
