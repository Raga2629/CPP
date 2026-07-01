#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        k=k%26;
        string ans="";
        for(char i:s){
            int curr=i-'a';
            int newpos=(curr+k)%26;
            cout<<(char)(newpos+'a');
           
        }
        cout<<endl;
   
    }
    return 0;
}