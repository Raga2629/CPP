#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long count=0;
        unordered_map<long long, long long> ans;
        for(int i=0;i<n;i++){
            long long x=a[i]^b[i];
            count+=ans[x];
            ans[x]++;
        }

       
        cout<<count<<endl;
    }
    return 0;
}