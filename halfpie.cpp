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
	    int s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s+=a[i];
	    }
	    int sum=0;
	    int mx=0;
	    for(int i=0;i<n-1;i++){
	       sum=a[i]+a[i+1];
	       mx=max(mx,s-(sum/2));
	        
	    }
	    
	    cout<<mx<<endl;
	}

}
