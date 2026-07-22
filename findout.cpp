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
	   sort(a.begin(),a.end());
	   int mx=a[n-1],mn=a[0];
	   if(mx>0) cout<<mx<<" "<<mx<<endl;
	   else if(mn<0) cout<<mn<<" "<<mn<<endl;
	   else cout<<-1<<endl;
	    
	   // if(ans) cout<<a[ind1]<<" "<<a[ind2]<<endl;
	   // else cout<<-1<<endl;
	}

}
