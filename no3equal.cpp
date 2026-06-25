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
	    int c=0;
	    int cnt=1;
	    for(int i=1;i<n;i++){
	        if(s[i]==s[i-1]){
	            cnt++;
	            //length of each chain i.e., letter
	        }
	        else{
	            c+=cnt/3; // adding edits for a chain
	            //every 3rd character is a breaking point
	            //aaaaa - > same 6/3=2 
	            //
	            cnt=1;// reset length for next character
	        }
	    }
	    cout<<c+cnt/3<<endl;
	}

}
