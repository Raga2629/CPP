#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n/2;i++){
            sum-=a[i];
        }
        for(int i=n/2;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    
}
