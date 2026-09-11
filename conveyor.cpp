#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0,c1=0;
        for(int i=0;i<k;i++){
            if(s[i]=='R'){
                c++;
            }
        }
        for(int i=k-1;i<n;i++){
            if(s[i]=='L'){
                c1++;
            }
        }
        cout<<min(c,c1)<<endl;
    }

}
