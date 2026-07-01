#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if(cin>>t){
        cin>>ws;
    
    while(t--){
        string s;
        getline(cin,s);
        string vowel="aeiouAEIOU";
        int words=0,v=0,c=0;
        int i=0;
        while(i<s.size()){
            if(vowel.find(s[i])!=string::npos){
                v++;
                i++;
            }
            else if(s[i]!=' '){
                c++;
                i++;
            }
            else{
                if(v>0 || c>0) words++;
                while(i<s.size() && s[i]==' '){
                    i++;
                }
            }
        }
        if(v>0 || c>0) {
            if(s[s.size()-1]!=' '){
                    words++;
                }
        }
        cout<<words<<" "<<v<<" "<<c<<endl;
    }  
    }
    return 0;
}