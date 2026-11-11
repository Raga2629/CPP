#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    vector<int> a(n),b(n);
	    int s1=0,s2=0,ans=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s1+=a[i];
	    }for(int i=0;i<n;i++){
	        cin>>b[i];
	        s2+=b[i];
	    }
	    if(s1>s2){
	        ans=s2+d;
	    }else ans=s1+d;
	    
	    int sum=0;
	    bool t1=false,t2=false;
	    for(int i=0;i<n;i++){
	        if(a[i]<b[i]){
	            sum+=a[i];
	            t1=true;
	        }else{
	            sum+=b[i];
	            t2=true;
	        }
	    }
	    if(t1 && t2){
	        cout<<min(ans,sum+(2*d))<<endl;
	    }else{
	        cout<<min(ans,sum+d)<<endl;
	    }
	}

}
