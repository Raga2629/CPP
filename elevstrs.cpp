#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,v1,v2;
	    cin>>n>>v1>>v2;
	    double t1=pow(2,0.5)*v2;
	    double t2=2*v1;
	    if(min(t1,t2)==t1){
	        cout<<"Stairs"<<endl;
	    }
	    else{
	        cout<<"Elevator"<<endl;
	    }
	}

}
