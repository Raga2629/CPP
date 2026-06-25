#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        std::vector<int> a(n) ;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=i;j<n;j++){
                temp.push_back(a[j]);
            
            int s=0,p=0;
            s=std::accumulate(temp.begin(), temp.end(), 0);
            p=std::accumulate(temp.begin(), temp.end(), 1,std::multiplies<int>());
            if(s==p) cnt++;
        }
        }
        cout<<cnt<<endl;
    }
}
