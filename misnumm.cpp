#include <bits/stdc++.h>
using namespace std;

int main() {
   
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
         vector<int> b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        vector<int> ans;
	    unordered_map<int,int> f1,f2;
	    for(int i=0;i<n;i++){
	        f1[a[i]]++;
	    }
	    for(int i=0;i<m;i++){
	        f2[b[i]]++;
	    }
	    int mx=max(n,m);
	        if(mx==n){
	            for(int i=0;i<mx;i++){
	                if(f1[a[i]]>f2[a[i]]){
	                    ans.push_back(a[i]);
	                }
	             }
	        }
	        else if(mx==m){
	            for(int i=0;i<mx;i++){
	                if(f2[b[i]]>f1[b[i]]){
	                    ans.push_back(b[i]);
	                }
	            }
	        }
	    sort(ans.begin(),ans.end());
	    set<int> s(ans.begin(),ans.end());
	    if(s.size()>0)
	    for(int i:s){
	        cout<<i<<" ";
	    }
	    else cout<<-1<<endl;
    
	
}
