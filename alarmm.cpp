#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    vector<bool> vis(n,false);
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(!vis[i] && s[i]=='1'){
	            int p=min(n-1,i+k);
	            for(int j=p;j>=max(0,p-k);j--){
	                vis[j]=true;
	            }
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
