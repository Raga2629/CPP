#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    if(a.size()<2 && a!=b){
	        cout<<"No\n";
	        continue;
	    }
	    int n=a.size();
	    bool ans=false;
	    for(char i:a){
	        for(char j:b){
	            if(j==i){
	                ans=true;
	                break;
	            }
	        }
	        if(ans) break;
	    }
	    if(ans){
	        cout<<"Yes\n";
	    }
	    else cout<<"No\n";
	    
	}

}
