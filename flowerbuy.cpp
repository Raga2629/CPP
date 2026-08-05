#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==2){
	        cout<<4<<endl;
	        continue;
	    }
	    else if(n==3){
	        cout<<5<<endl;
	        continue;
	    }
	    int cnt=0;
	    int x=n;
	   
	   if(n%3==0){
	      cout<<(n/3)*5<<endl;
	   }
	   else if(n%3==2){
	       cout<<((n-2)/3)*5+4<<endl;
	   }
	   else if(n%3==1){
	    cout<<(((n-4)/3)*5)+8<<endl;
	}}

}
