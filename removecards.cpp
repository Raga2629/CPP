#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int mx=INT_MIN;
	    unordered_map<int,int> freq;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	        mx=max(mx,freq[a[i]]);
	    }
	    cout<<n-mx<<endl;
	}

}
