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
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        long long cnt=0;
        map<pair<int,int>,int> ans;
        for(int i=0;i<n;i++){
            cnt+=ans[{b[i],a[i]}];
            ans[{a[i],b[i]}]++;
        }
        // unordered_map<string,int> valid;
        // for(int i=0;i<n;i++){
        //     string curr=to_string(a[i])+"#"+to_string(b[i]);
        //     string rev=to_string(b[i])+"#"+to_string(a[i]);
        //     cnt+=valid[rev];
        //     valid[curr]++;
        // }
         cout<<cnt<<endl;
    }
    return 0;
}