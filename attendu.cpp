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
	    int cnt=0;
	    for(char i:s){
	        if(i=='1') cnt++;
	    }
	    long long ans=((120-n+cnt)*100/120);
	    if(ans>=75) cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}

}
