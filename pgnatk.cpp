#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int i=1,cnt=1;
	    while(cnt<=n){
	        if(i%k!=0)
	         cnt++;
	        i++;
	    }
	    cout<<i-1<<endl;
	    
	}

}
