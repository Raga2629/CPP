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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   // sort(a.begin(),a.end());
	  
	   while(true){
	    bool f=false;
	    for(int i=0;i<n-1;i++){
	        if(a[i] + a[(i+1)] <= 2 && a[i]>a[i+1]){
	            swap(a[i],a[(i+1)]);
	            f=true;
	        }
	    }
	    if(!f) break;
	   }
	    for(int i:a){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}

}
