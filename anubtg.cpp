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
        sort(a.rbegin(),a.rend());
        int sum=0;
        if(n<=2){
            int s=std::accumulate(a.begin(), a.end(), 0);
            cout<<s<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(i%2!=0) i+=2;
        }
        cout<<sum<<endl;
        
    }

}
