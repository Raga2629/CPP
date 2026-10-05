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
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a.begin(),a.end());
	    int s=std::accumulate(a.begin()+1, a.end(), 0);
	    cout<<s<<endl;
	}

}
