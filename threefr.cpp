#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        bool ans=false;
        for(int i=0;i<8;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                int t;
                if(j==0) t=x;
                else if(j==1) t=y;
                else t=z;
                if(((i>>j)&1)){
                    sum+=t;
                }else{
                    sum+=(-t);
                }
            }
            if(sum==0){
                ans=true;
                break;
            }
        }
        if(!ans)
        cout<<"no\n";
        else cout<<"yes\n";
    }
}
