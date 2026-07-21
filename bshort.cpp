#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt1=0,cnt2=0;
	    for(char i:s){
	        if(i=='1') cnt1++;
	        else cnt2++;
	    }
	    cnt1!=0 ? cout<<cnt1%2<<endl: cout<<cnt2<<endl;
	    
	   // }if(cnt1%2==0) cout<<0<<endl;
	   // else cout<<1<<endl;
	}

}
