#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int cnt=0;
	    set<pair<char,char>>vis;
	    for(int i=0;i<n-1;i++){
	        if(!vis.count({s[i],s[i+1]})){
	            cnt++;
	            vis.insert({s[i],s[i+1]});
	        }
	    }
	    cout<<cnt<<endl;
	}

}
