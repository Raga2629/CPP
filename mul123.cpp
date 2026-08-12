#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt=0;
	   // if(n==1) cout<<2<<endl;
	    if(n%3==0){
	        cout<<0<<endl;
	    }
	    else if((n+1)%3==0 || ((((n/5) + 1)*5)%3)==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	    
	}

}
