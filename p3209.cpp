#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
           a[i]=i+1;
        }
        unordered_map<int,int> temp;
        for(int i=0;i<n;i++){
            temp[a[i]]=gcd(a[i],n);
            
        }

        sort(a.begin(),a.end(),[&](int x, int y){
            if(temp[x]==temp[y]) return x<y;
            return temp[x]>temp[y];
        });
      
      for(int i=0;i<a.size();i++){
          cout<<a[i]<<" ";
      }  
      cout<<endl;
    }

}
