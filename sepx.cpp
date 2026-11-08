#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,x;
	    cin>>n>>x;
	    vector<long long> a(n);
	    long long c1=0,c2=0,c3=0;
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	        if(a[i]<x){
	            c1++;
	        }else if(a[i]>x){
	            c2++;
	        }
	        else c3++;
	    }
	    if(c3>0 || c2==0 || c1==0) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	

}
