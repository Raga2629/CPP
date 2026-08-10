#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<k;i++){
	    if(s[i]=='W') c++;
	}
	int out=c;
	for(int i=k;i<n;i++){
	    if(s[i-k]=='W') c--;
	    if(s[i]=='W') c++;
	    out=min(out,c);
	}
	cout<<out;

}
