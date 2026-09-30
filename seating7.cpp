#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int> a(m);
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    int cnt=0;
	    for(int i=1;i<=n && cnt<k;i++){
	        if(find(a.begin(),a.end(),i)==a.end()){
	            cout<<i<<" ";
	            cnt++;
	        }
	    }
	    cout<<endl;
	}

}
