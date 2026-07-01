#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> cnt(26,0);
        string s1,s2;
        cin>>s1>>s2;
        for(char i:s1){
            cnt[i-'a']++;
        }
        for(char i:s2){
            if(cnt[i-'a']==0){
                cout<<i;
            }
        }
        cout<<endl;
    }
       
    return 0;
}