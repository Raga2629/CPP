#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    unordered_map<long long,long long> freq;
	    long long mx=0;
	    for(int i=0;i<n;i++){
	        freq[a[i]-i+1]++;
	        mx=max(mx,freq[a[i]-i+1]);
	    }
	  
	        cout<<n-mx<<endl;
	}

}

