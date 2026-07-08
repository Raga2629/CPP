#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int y,r;
	    cin>>r>>y;
	   // if(r==0){
	   //     cout<<y/2<<endl;
	      
	   // }
	   // else cout<<(r+y)%r<<endl;
	   if(y>r)
	    cout<<r+(y-r)/2<<endl;
	    else 
	    cout<<r<<endl;
	}

}
