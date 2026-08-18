#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int sum=a[0];
	    if(sum<k){
	        cout<<"NO "<<1<<endl;
	        continue;
	    }
	    bool ans=false;
	    for(int i=1;i<n;i++){
	        sum-=k;
	        sum+=a[i];
	        if(sum<k){
	            cout<<"NO "<<i+1<<endl;
	            ans=true;
	            break;
	        }
	    }
	    if(!ans){
	        cout<<"YES\n";
	    }
	    
	}

}
