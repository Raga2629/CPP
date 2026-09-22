#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a<=2){ cout<<"Bob\n"; continue;}
	    if(a%2==0){
	        cout<<"Bob\n";
	    }
	    else cout<<"Alice\n";
	}

}
