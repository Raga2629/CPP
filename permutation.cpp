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
        int cnt=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                if(i+1-a[i]<0){
                    cnt=-1;
                    break;
                }else
                cnt+=i+1-a[i];
            }
        }
        cout<<cnt<<endl;
        
    }
}
