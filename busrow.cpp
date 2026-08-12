#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,n,x;
	    cin>>m>>n>>x;
	    int r= x/n;
	   cout<<min(r,m-r+1)<<endl;
	}

}
