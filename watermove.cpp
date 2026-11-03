#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int s=std::accumulate(a.begin(), a.begin()+2, 0);
        cout<<max(s,a[n-1])<<endl;
    }

}
