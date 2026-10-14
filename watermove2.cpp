#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    int sum=a[n-1];
	    
	    if(k>n){
	        k=n;
	    }
	    int i=2;
	    while(k>0){
	        sum+=a[n-i];
	        k--;
	        i++;
	    }
	    cout<<sum<<endl;
	}

}
