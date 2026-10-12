#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,x,y;
	    cin>>m>>x>>y;
	    vector<int> a(m);
	    for(int i=0;i<m;i++) cin>>a[i];
	    vector<bool> s(101,false);
	    for(int i=0;i<m;i++){
	        int l=max(1,a[i]-(x*y));
	        int r=min(100,a[i]+(x*y));
	        for(int j=l;j<=r;j++){
	            s[j]=true;
	        }
	    }
	    int cnt=0;
	    for(int i=1;i<=100;i++){
	        if(!s[i]) cnt++;
	    }
	    cout<<cnt<<endl;
	   // int mn=*std::min_element(a.begin(), a.end());
	   // int mx=*std::max_element(a.begin(), a.end());
	   // int ans=abs(abs(mx+(x*y))-abs(mn-(x*y)))+1;
	   // if(m>1)
	   // cout<<100-ans<<endl;
	   // else{
	   //     cout<<100-(mx+(x*y))<<endl;
	   // }
	    
	}

}
