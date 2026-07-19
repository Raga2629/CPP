#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    vector<int> a(n);
	    int r=1;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	       // if(a[i]>x) r++;
	    }
	    sort(a.begin(),a.end());
	    for(int i=0;i<k;i++){
	        x+=100;
	        a[n-1-i]=0;
	      
	    }
	    for(int i:a){
	        if(i>x) r++;
	    }
	    cout<<r<<endl;
	    
	}

}
