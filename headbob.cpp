#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int nc=0,ni=0;
        for(char i:s){
            if(i=='Y') nc++;
            else if (i=='I') ni++;
        }
        if(ni!=0) cout<<"INDIAN\n";
        else if(nc!=0) cout<<"NOT INDIAN\n";
        
        else{
            cout<<"NOT SURE\n";
        }
    }
}
