#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> a(n);
	    int sum=x,mx=x;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	        sum+=a[i];
	       
	        mx=max(mx,abs(sum));
	    }
	    cout<<mx<<endl;
	}

}
