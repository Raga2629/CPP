#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> a(n);
	    unordered_map<long long,long long> freq1,freq2;
	    long long mx=INT_MIN;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq1[a[i]]++;
	        
	    }
	    for(int i:a){
	        mx=max(mx,freq1[i]);
	    }
	    cout<<(mx+1)/2<<endl;
	}

}
