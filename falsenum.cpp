#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       string a;
       cin>>a;
       int n=a.size();
       if(a[0]=='1'){
           cout<<"10";
           for(int i=1;i<n;i++){
               cout<<a[i];
           }
           cout<<endl;
       }else{
           cout<<"1";
           cout<<a<<endl;
       }
    }

}
