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
	    bool ans=false;
	    unordered_map<char,int> freq;
	    for(char i:s){
	        freq[i]++;
	    }
	    if(freq[s[n-1]]>=2){
	        cout<<"YES\n";
	    }else cout<<"NO\n";
	}

}
