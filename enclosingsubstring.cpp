#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &cnta,vector<int> &cntb){
    for(int i=0;i<26;i++){
        if(cntb[i] < cnta[i]){
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=b.size();
        int m=a.size();
        vector<int> cnta(26,0),cntb(26,0);
         for(char i:a){
            cnta[i-'a']++;
        }
        int p1=0,p2=0,ans=INT_MAX;       
        for(p2=0;p2<n;p2++){
            cntb[b[p2]-'a']++;
            while(isValid(cnta,cntb) && p1<n){
                ans=min(ans,p2-p1+1);
                cntb[b[p1]-'a']--;
                p1++;
            }
        }
        if(ans==INT_MAX){
            cout<<-1<<endl;
        }
        else
        cout<<ans<<endl;
        
    }
    return 0;
}