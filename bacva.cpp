#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	
	    string s;
	    cin>>s;
	    long long sum=0;
	    for(char i:s){
	        sum+=i-'0';
	    }
	    
	    if(sum%10==0) cout<<"Valid\n";
	    else cout<<"Invalid\n";
	}

}
