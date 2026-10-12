#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    vector<long long> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long left=0,cnt=0,sum=0,mx=0;
	    for(int right=0;right<n;right++){
	        sum+=a[right];
	        while(sum>m){
	            sum-=a[left];
	            left++;
	        }
	        mx=max(mx,right-left+1);
	    }
	    cout<<mx<<endl;
	}

}
