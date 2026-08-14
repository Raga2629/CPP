#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0')
	        {
	            ans=i;
	            break;
	        }
	        else{
	            ans=n;
	        }
	    }
	    cout<<ans<<endl;
	}

}
