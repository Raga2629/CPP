#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        priority_queue<int>mxheap;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mxheap.push(x);
        }
        int cnt=0;
        while( k>0 && !mxheap.empty() ){
            int x1= mxheap.top();
            mxheap.pop();
            cnt++;
            k=k-x1;
            if(x1/2>0)
            mxheap.push(x1/2);
           
        }
        if(k>0){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
    }  
    return 0;
}