#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        a[i]=n-i;
	    }
	    for(int i:a){
	        cout<<i<<" ";
	    }
	}

}
