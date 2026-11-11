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
	   // if(stoi(s)%4==0) cnt=1;
	    for(int i=0;i<n;i++){
	        string t;
	        t+=s[i];
	        t+=s[(i+1)%n];
	        int x=stoi(t);
	        if(x%4==0){
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
