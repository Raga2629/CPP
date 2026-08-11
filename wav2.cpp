#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	while(q--){
	    long long x;
	    cin>>x;
	    int cnt=0;
	    bool ans=false;
	    //search for a x whether it exists in 'a' O(logn)
	    if(std::binary_search(a.begin(), a.end(), x)){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    
	    //upper_bound -->> a number which is greater than x is returned
	    //x-a[i]>0 positive, x>a[i] count odd lo vunte ans negative lo untadhi, so >>
	    
	    
	    auto it=std::upper_bound(a.begin(), a.end(), x);
	    int g=a.end()-it;
	    if(g%2!=0){
	        cout<<"NEGATIVE\n";
	    }
	    else cout<<"POSITIVE\n";
	}
	

}
