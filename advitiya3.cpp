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
	  
	    int mn=-1;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]/k >=1 ){
	            if(mn==-1 ||a[i]%k<mn)
	            mn=a[i]%k;
	        }
	    }
	    
	    cout<<mn<<endl;
	}

}
