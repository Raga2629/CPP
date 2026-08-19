#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int cnt=0,sum=0,j=0,mx=0;
	    for(int i=0;i<a.size();i++){
	        sum+=a[i];
	        mx=max(mx,a[i]);
	        if(sum-mx<=k ){
	            cnt=i+1;
	        }
	        else break;
	    }
    
	    cout<<cnt<<endl;
	    
	    
	}

}
