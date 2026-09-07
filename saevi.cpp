#include <bits/stdc++.h>
using namespace std;

int main() {
	
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>(2*k) && (i%2)==0){
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
    
}
