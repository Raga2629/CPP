#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string a,b;
	    cin>>n>>a>>b;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1'&& b[i]=='1'){
	            sum+=1;
	        }
	    
	    }
	    for(int i=0;i<n;i++){
	        if(((a[i]=='1' && b[i]=='0')|| (a[i]=='0' && b[i]=='1'))&& sum%2==0){
	            sum+=1;
	        }
	    }
	    if(sum%2!=0)
	    cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
