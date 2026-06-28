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
	    int zcnt=0,ocnt=0;
	    for(char i:s){
	        if(i=='0') zcnt++;
	        else ocnt++;
	    }
	    if(zcnt==n) {
	        cout<<0<<endl;
	        continue;
	    }
	    else if(ocnt==n){
	        cout<<1<<endl;
	    }
	    else {
	        if(ocnt<=zcnt){
	            cout<<ocnt<<endl;
	        }
	        else
	            cout<<zcnt+1<<endl;
	    }
	}

}
