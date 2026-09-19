#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int i=0;
	    while(s[i]=='0'){
	        i++;
	    }
	    int cnt=0;
	    for(;i<s.size()-1;i++){
	        if(s[i]=='1' && s[i+1]=='0'){
	            cnt++;
	        }
	    }
	    if(s[s.size()-1]=='1') cnt++;
	    cout<<cnt<<endl;
	}

}
