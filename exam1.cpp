#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int cnt=0,no=0;
	    for(int i=0;i<n;i++){
	        
	        if(a[i]==b[i]) cnt++;
	        else if(b[i]!='N') i++;
	    }
	    cout<<cnt<<endl;
	}

}
