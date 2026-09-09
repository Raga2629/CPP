#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    unordered_map<char,int> freq1,freq2;
	    for(char i:a){
	        freq1[i]++;
	    }
	    for(char i:b){
	        freq2[i]++;
	    }
	        if(freq1['a']>=freq2['b'] && freq1['b']>=freq2['a']){
	           cout<<"YES\n";
	            
	        }
	        else{
	            cout<<"NO\n";
	        }
	    
	}

}
