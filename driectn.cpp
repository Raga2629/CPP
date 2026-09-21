#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s.find("RR")!=string::npos || s.find("LL") != string::npos){
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	}

}
