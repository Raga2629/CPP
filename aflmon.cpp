#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    int c=0;
	    for(int i=0;i<n;i++){
	        int cnt=0,cnt2=0;
	        for(int j=0;j<n;j++){
	                if(a[i]<a[j]){
	                    cnt++;
	                }
	                if(a[i]>=a[j]){
	                    cnt2++;
	                }
	        }
	        if(cnt2>cnt){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}

}
