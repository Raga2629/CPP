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
	    int sum=0;
	    int cntodd=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%2==1) cntodd++;
	    }
	    if(cntodd>0 && (cntodd)%2==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    
	}

}
