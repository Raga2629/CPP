#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    cin>>s1;
	    int cnt1=0,cnt2=0;
	    for(char i:s1){
	        if(i=='1'){
	            cnt1++;
	        }
	        else{
	            cnt2++;
	        }
	    }
	    if(cnt1>cnt2 || (cnt1==10 && cnt2==10)){
	        cout<<"WIN\n";
	    }
	    else{
	        cout<<"LOSE\n";
	    }
	}

}
