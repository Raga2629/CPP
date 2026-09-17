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
	    if(n%2!=0){
	        cout<<"NO\n";
	        continue;
	    }
	    unordered_map<char,int> freq;
	    for(int i=0;i<n;i++){
	        freq[s[i]]++;
	    }
	    bool vis=false;
	    for(char i:s){
	       if(freq[i]%2==0){
	           vis=true;
	       } 
	       else{
	           vis=false;
	           break;
	       }
	    }
	    if(vis){
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	    
	}

}
