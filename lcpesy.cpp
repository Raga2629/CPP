#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        map<char,int> f1,f2;
        vector<bool> vis(26,false);
        int cnt=0;
       
        for(char i:a){
            f1[i]++;
        }
        for(char i:b){
            f2[i]++;
        }
     
        
        for(auto i:f1){
            for(auto j:f2){
                if(i.first==j.first){
                    cnt+=min(i.second,j.second);
                }
            }
        }
      
        cout<<cnt<<endl;
    }
}
