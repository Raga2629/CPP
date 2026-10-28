#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    int cnt=0,c=0;
	    for(int i=0;i<n-1;i++){
	        if(a[i]==a[i+1]){
	            cnt++;
	            if(cnt==2){
	                c++;
	                cnt=0;
	                i++;
	            }
	        }else{
	            cnt=0;
	        }
	        
	    }
	    cout<<c<<endl;
	}

}
