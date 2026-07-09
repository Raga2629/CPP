#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        long long t=a[0];
        for(int i=1;i<n;i++){
        
            if(a[i]<t){
                sum+=t-a[i];
            }
            else
            t=a[i];
        }
        cout<<sum<<endl;
    }
}
