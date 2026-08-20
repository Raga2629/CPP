#include <bits/stdc++.h>
using namespace std;
void interleavings(string A, string B, string ans, int i,int j, vector<string> &answer){
    if(i==A.size() && j==B.size()){
        answer.push_back(ans);
        return;
    }
    if(i<A.size()){
        interleavings(A,B,ans+A[i],i+1,j,answer);
    }
    if(j<B.size()){
        interleavings(A,B,ans+B[j],i,j+1,answer);
    }
}
int main() {
    int t;
    cin>>t;
    int k=1;
    while(t--){
        vector<string>answer;
        cout<<"Case #"<<k<<":\n";
        string A,B;
        cin>>A>>B;
        string ans;
        int i=0,j=0;
        interleavings(A,B,ans,i,j,answer);
        sort(answer.begin(),answer.end());
        for(string m:answer){
            cout<<m<<endl;
        }
        k++; 
    } 
    return 0;
}