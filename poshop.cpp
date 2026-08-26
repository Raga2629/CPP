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
	        cin>>a[i];
	    }
	    int sum=0;
	    
	    int j=0,mx=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	        if(a[i]<=a[j] && i<j){
	            sum=a[j]+a[i];
	            mx=max(mx,sum);
	        }
	        else{
	            mx=max(mx,a[i]);
	        }
	        
	    }}
	    cout<<mx<<endl;
	}

}
