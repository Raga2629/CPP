#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int sum=0,sum2=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(l-1>=0){
            for(int i=0;i<l-1;i++){
                sum+=a[i];
            }
        }
        if(r+1<=n){
            for(int i=r;i<n;i++){
                sum2+=a[i];
            }
        }
        cout<<max(sum,sum2)<<endl;
    }
}
