#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,c;
	    cin>>d>>c;
	    int a1,a2,a3;
	    cin>>a1>>a2>>a3;
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    int s1=a1+a2+a3;
	    int s2=b1+b2+b3;
	    if(s1<150 && s2<150){
	        cout<<"NO\n";
	    }
	    else if(s1<150 && s2>=150){
	       int x=s1+s2+d+d;
	        int y=s1+s2+c+d;
	        if(y<x){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	    }
	    else if(s1>=150 && s2<150){
	        int x=s1+s2+c+d;
	        int y=s1+s2+d+d;
	        if(x<y){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	    }else{
	        int x=s1+s2+c;
	        int y=s1+s2+d+d;
	        if(x<y){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	    }
	 
	    
	}

}
