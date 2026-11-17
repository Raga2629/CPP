#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	   
	    for(int i=0;i<5;i++){
	        if(s1[i]==s2[i]){
	            s1[i]='G';
	        }else{
	            s1[i]='B';
	        }
	    }
	    cout<<s1<<endl;
	}

}
