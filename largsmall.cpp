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
	   int mx=*std::max_element(a.begin(), a.end());
	   int mn=*std::min_element(a.begin(), a.end());
	   if(mx!=mn)
	   cout<<mx-mn-1<<endl;
	   else cout<<0<<endl;
	}

}
