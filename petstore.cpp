#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    unordered_map<int,int> freq;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    bool ans=false;
	    for(int i:a){
	        if(freq[i]%2==0){
	            ans=true;
	        }
	        else {
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
