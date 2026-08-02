#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size(),cnt=0;
	    for(int i=0;i<n-1;i++){
	        if(s[i]=='<' && s[i+1]=='>'){
	            cnt++;
	            i+=1;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
