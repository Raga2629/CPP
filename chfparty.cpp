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
	    int cnt=0;
	    int j=0;
	    while(j<n){
	        if(a[j]==0){
	            cnt++;
	            j++;
	        }else break;
	    }
	    for(int i=j;i<n;i++){
	        if(cnt>=a[i]){
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
