#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int mn=INT_MAX;
        for(int i=1;i<n;i++){
            mn=min(mn,a[i]-a[i-1]);
        }
        cout<<mn<<endl;
    }

}
