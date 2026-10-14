#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> mnheap;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mnheap.push(x);
        }
        int ans=0,sum=0;
        while(mnheap.size()>=2){
            int x=mnheap.top();
            mnheap.pop();
            int y=mnheap.top();
            mnheap.pop();
            ans=x+y;
            mnheap.push(ans);
            sum+=ans;
        }
        cout<<sum<<endl;
    }  
    return 0;
}