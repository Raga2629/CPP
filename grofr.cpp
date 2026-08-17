#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n;i++){
	    if(s[i]=='1' && s[i+1]=='0'){
	        cnt++;
	    }
	}
	if(s[n-1]=='1'){
	    cnt++;
	}
	cout<<cnt<<endl;

}
