#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool ans=false;
	    string a="CODETOWN";
	    for(int i=0;i<s.size();i++){
	        if((s[i]=='A'||s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U') && (a[i]=='A'||a[i]=='E'||a[i]=='I' || a[i]=='O'||a[i]=='U') ){
	            ans=true;
	        }
	        else if((s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') && 
         (a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')){
	            ans=true;
	        }
	        else{
	            ans=false;
	            break;
	        }
	    }
	    if(ans){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}

}
