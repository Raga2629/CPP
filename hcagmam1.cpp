#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    int cnt1=0,mxstreak=0,cnt=0;
	    for(char i:s){
	        if(i=='1') {
	            cnt1++;
	            cnt++;
	            mxstreak=max(mxstreak,cnt);
	        }
	        else{
	            cnt=0;
	        }
	    }
	    cout<<((cnt1*n) + (mxstreak*m))<<endl;
	}

}
