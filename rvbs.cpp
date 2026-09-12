#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int z1=0,z2=0,o=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1') z1++;
	        if(b[i]=='1') o++;
	    }
	    if(z1!=o) {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    int cnt=0,cnt1=0;
	    vector<int> prea1,preb1;
	   
	    for(int i=0;i<n;i++){
	        if(a[i]=='1') prea1.push_back(i);
	        if(b[i]=='1') preb1.push_back(i);
	        
	    }
	  
	    int c=0;
        for(int i=0;i<prea1.size();i++){
            if(prea1[i]!=preb1[i]){
                c++;
            }
        }
        cout<<c<<endl;
	}

}

//a lo 1 position, b lo 1 position different unte count cheyali!