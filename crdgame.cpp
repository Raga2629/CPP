#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   int cnt1=0,cnt2=0;
	    while(n--){
	        int a,b;
	        cin>>a>>b;
	        int x=a;
	        int s=0;
	        while(x>0){
	            int d=x%10;
	            s+=d;
	            x/=10;
	        }
	        int y=b,s2=0;
	        while(y>0){
	            int f=y%10;
	            s2+=f;
	            y/=10;
	        }
	        
	        if(s>s2){
	            cnt1++;
	        }
	        else if(s<s2){
	            cnt2++;
	        }
	        else{
	            cnt1++;
	            cnt2++;
	        }
	    }
	    if(cnt1>cnt2){
	        cout<<0<<" "<<cnt1<<endl;
	    }
	    else if(cnt1<cnt2){
	        cout<<1<<" "<<cnt2<<endl;
	    }
	    else{
	        cout<<2<<" "<<cnt1<<endl;
	    }
	    
	}

}
