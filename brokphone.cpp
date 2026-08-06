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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int cnt=0;
	    vector<bool> vis(n,false);
	    for(int i=0;i<n-1;i++){
	        if(a[i]!=a[i+1]){
	            if(vis[i]!=true){
	                cnt+=2;
	                vis[i]=true;
	                vis[i+1]=true;
	            }
	            else{
	                cnt+=1;
	                vis[i+1]=true;
	            }
	           
	        }
	    }
	    cout<<cnt<<endl;
	}

}
