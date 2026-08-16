#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int x=0;
	    int n=s.size();
	   // unordered_map<char,int> f1(26,0),f2(26,0);
	    vector<int> f1(26,0),f2(26,0);
	    if(n%2==0){
	        x=n/2;
	    }
	    else x=(n/2)+1;
	   
	        for(int i=0;i<n/2;i++){
	            f1[s[i]-'a']++;
	        }
	        for(int i=x;i<n;i++){
	            f2[s[i]-'a']++;
	        }
	        bool ans=false;
	  
	        for(int i=0;i<n/2;i++){
	            if(f1[s[i]-'a']==f2[s[i]-'a']){
	                ans=true;
	            }
	            else{ 
	                ans=false;
	                break;
	            }
	        }
	        if(ans){
	            cout<<"YES\n";
	        }
	        else cout<<"NO\n";
	    
	    
	}

}
