#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    vector<int> t={0,6,5,4};
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a.begin(),a.end());
	    int i=0;
	    while(k-- && i<n){
	        if(a[i]==1 || a[i]==2 || a[i]==3){
	            a[i]=t[a[i]];
	        }
	        i++;
	    }
	    int s=std::accumulate(a.begin(), a.end(), 0);
	    cout<<s<<endl;
	}

}
