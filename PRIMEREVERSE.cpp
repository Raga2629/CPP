#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1,s2;
	    cin>>s1>>s2;
	    int cnt0=0,cnt1=0;
	    for(char i:s1){
	        if(i=='0') cnt0++;
	        else cnt1++;
	    }
	    int cntzero=0,cntone=0;
	    for(char i:s2){
	        if(i=='0') cntzero++;
	        else cntone++;
	    }
	    
	    if(cntzero==cnt0 && cnt1==cntone) cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
