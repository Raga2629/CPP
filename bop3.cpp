#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    set<int> s;
	    int score=0;
	    for(int i=0;i<=n;i++){
	        s.insert(i);
	    }
	        for(int i=2;i<=n;i+=2){
	            score+=i;
	        }
	        cout<<score<<endl;
	    
	}

}
