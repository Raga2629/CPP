#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int cnt=0;
	    while(a*b<c){
	        int x=min(a,b);
	        if(x==a) a=a+1;
	        else b=b+1;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}

}
