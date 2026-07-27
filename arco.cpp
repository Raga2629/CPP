#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> a(n);
	unordered_map<int,int> freq;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    freq[a[i]]++;
	}
	int cnt=1;
	for(int i=1;i<a.size();i++){
	    if(a[i]!=a[i-1])
	    cnt++;
	}
	
	cout<<cnt;
	

}
