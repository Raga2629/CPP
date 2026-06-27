#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,b;
	    cin>>n>>b;
	    int mx=INT_MIN;
	    while(n--){
	        int w,h,p;
	        cin>>w>>h>>p;
	        if(p>b){
	           continue;
	        }
	        else{
    	        int x=w*h;
    	        mx=max(mx,x);
	        }
	    }
	    if(mx!=INT_MIN)
	    cout<<mx<<endl;
	    else
	    cout<<"no tablet\n";
	}

}
