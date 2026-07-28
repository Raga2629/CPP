#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int cnt=0;
	    int mx=-1,n=s.size();
	    for(char i:s){
	        if(i!=s[0] && i!=s[n-1]){
	            cnt++;
	            mx=max(mx,cnt);
	        }
	        else{
	            cnt=0;
	        }
	    }
	    cout<<mx<<endl;
	}

}
