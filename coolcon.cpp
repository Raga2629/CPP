#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int d=x-y;
	    int ans=0;
	    for(int i=0;i<d;i++)
	        ans+= ((x-i+10-1)/10);
	    cout<<ans<<endl;
	}

}
