#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=1;
        int i=k;
        if((1+k)>n) cout<<1<<endl;
        
        else{
            while((sum+k)<=n){
                sum+=i;
              
            }
            cout<<sum<<endl;
        }
    }
}
