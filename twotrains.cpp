#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long sum=0;
	    vector<int> a(n-1);
	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    sort(a.begin(),a.end());
	    cout<<sum+a[n-2]<<endl;
	   
	    
	    
	}

}
