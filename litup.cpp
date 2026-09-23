#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int mn=INT_MAX;
	    
	    for(int i=0;i<n;i++){
	       for(int j=i+1;j<n;j++){
	            vector<bool> b(n,false);
	            bool ans=true;
	            for(int m=i;m<=i+k && m<n; m++){
	                b[m]=true;
	            }
	            for(int m=i;m>=i-k && m>=0; m--){
	                b[m]=true;
	            }
	  
	            for(int l=j;l>=j-k && l>=0;l--){
	                b[l]=true;
	            }
	            for(int l=j; l<=j+k && l<n;l++){
	                b[l]=true;
	            }
	            for(int l=0;l<n;l++){
	                if(b[l]==false) {
	                    ans=false;
	                    break;
	                }
	            }
	       
	            if(ans){
	                mn=min(mn,a[i]+a[j]);
	            }
	       }
	    }
	    if(mn!=INT_MAX)
	    cout<<mn<<endl;
	    else cout<<-1<<endl;
	}

}
