#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	long long m=1e9+7;
	long long ans=0;
	long long mn=*min_element(a.begin(),a.end());
	long long mx=*max_element(a.begin(),a.end());
	double avg=(mn+mx)/2.0;
	sort(a.begin(),a.end());
	long long best=a[0];
	double mndist=abs(a[0]-avg);
	for(long long i=1;i<n;i++){
	    double d=abs(a[i]-avg);
	    if(d<mndist){
	        mndist=d;
	        best=a[i];
	    }
	}

	cout<<best<<endl;

}
