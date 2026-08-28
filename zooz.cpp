#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=0;i<n;i++){
            s+=' ';
        }
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                if(i%2==0){
                    s[i]='1';
                    s[n-i-1]='1';
                }
                else{
                    s[i]='0';
                    s[n-i-1]='0';
                }
            }
        }
        else{
             for(int i=0;i<n/2;i++){
                 
                if(i%2==0){
                    s[i]='1';
                    s[n-i-1]='1';
                }
                else{
                    s[i]='0';
                    s[n-i-1]='0';
                }
                if((i+1)==n/2){
                     if(s[i]=='1'){
                         s[i+1]='0';
                         break;
                     }
                     else{
                         s[i+1]='1';
                         break;
                     }
                 }
            }
            
        }
       
        cout<<s<<"\n";
        
    }

}
