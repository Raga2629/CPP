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
	    unordered_map<char,int> freq;
	    bool ans=false;
	    for(char i:s){
	        freq[i]++;
	    }
	    for(int i=0;i<n;i++){
	        if(freq[s[i]]%2==0){
	            ans=true;
	        }
	        else{
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
