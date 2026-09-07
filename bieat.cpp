#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int m;
	cin>>m;
	vector<int> ans;
	for(int i=0;i<n;i++){
	    ans.push_back(a[i]/(1<<m));
	}
	for(int i=0;i<n;i++){
	    cout<<ans[i]<<" ";
	}

}
