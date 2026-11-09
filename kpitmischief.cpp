#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	cin>>m;
	string s;
	cin>>s;
	vector<int> t;
	for(int i=0;i<m;i++){
	    if(s[i]=='m'){
	        if(i==0 || s[i-1]!='m') t.push_back(i);
	       
	    }else{
	        if(i>0 && s[i-1]=='m')  t.push_back(i-1);
	    }
	}
	if(s[m-1]=='m') t.push_back(m-1);
	int mx=INT_MIN,st=0,end=0;
	for(int i=1;i<t.size();i+=2){
	    if((t[i]-t[i-1])>mx){
	        st=t[i-1];
	        end=t[i];
	        mx=t[i]-t[i-1];
	        
	    }
	}
// 	cout<<t.size()<<endl;
// 	for(int i:t) cout<<i<<" ";
	cout<<st<<" "<<end<<endl;
	

}
