#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    int cnt=0,mx=0;
	    vector<bool> ans(n,false);
	    for(int i=0;i<n;i++){
	        if(b.find(a[i])==string::npos){
	            ans[i]=true;
	        }
	        
	    }
	    for(int i=0;i<n;i++){
	        if(!ans[i]){
	            cnt++;
	            mx=max(mx,cnt);
	        }else cnt=0;
	    }
	    int cnt2=0,mx2=0;
	    for(int i=0;i<n;i++){
	        if(ans[i]){
	            cnt2++;
	            mx2=max(mx2,cnt2);
	        }else cnt2=0;
	    }
	    cout<<max(mx,mx2)<<endl;
	}

}
