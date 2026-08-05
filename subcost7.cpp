#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n<3){
	        cout<<n*a<<endl;
	       
	    }
	    else if(n>=3){
	        cout<<3*a+ ((n-3)*b)<<endl;
	    }
	}

}
