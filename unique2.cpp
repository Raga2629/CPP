#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	unordered_map<int,int> freq;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    freq[a[i]]++;
	}

	for(int i:a){
	    if(freq[i]>=1){
	        cout<<i<<" ";
	        freq[i]=0;
	    }
	}

}
