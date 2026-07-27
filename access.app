#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	   
	    string s;
	    cin>>s;
	    if(s[0]=='0') {
	        cout<<"NO\n";
	        continue;
	    }
	    bool ans=false;
	   int swipe=0;
	   for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            swipe=x;
	        }
	        else{
	            swipe--;
	        }
	        if(swipe<0){
	            break;
	        }
	    }
	   if(swipe>=0)
	   cout<<"YES\n";
	   else{
	       cout<<"NO\n";
	   }
	    
	    
	}

}
