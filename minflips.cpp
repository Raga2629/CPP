#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int m=0,o=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==1) o++;
	        else m++;
	    }
	    if(n%2==1) {
	        cout<<-1<<endl;
	        continue;
	    }
	   
	    cout<<abs(o-m)/2<<endl;
	    
	}

}
