#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,char> f;
        for(char i:s){
            f[i]++;
        }
        if(n==f.size()){
            cout<<"YES\n";
            continue;
        }
        
        bool ans=true;
        for(char i:s){
            if(f[i]>=3){
              ans=false;
              break;
            }
        }
       
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
