#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	     
	    int one=(x1+y1)%2;
	    int two=(x2+y2)%2;
	    if(one==two){
	        if(x1-y1 == x2-y2 || x1+y1==x2+y2)
	            cout<<1<<endl;
	   
	        else{
	            cout<<2<<endl;
	        }
	    }else
	    cout<<-1<<endl;
	}

}