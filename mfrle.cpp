#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin,s);
// 	string s1=lower(s);
	int mx=0;
	char ch='a';
	unordered_map<char,int> mp;
	for(char &i:s){
	    if(isalpha(i)){
	    i=tolower(i);
	    mp[i-'a']++;
	    }
	    
	}
	int max_freq=0;
	for(int i=0;i<26;i++){
	    
	    if(mp[i]>max_freq){
	        max_freq=mp[i];
	        ch='a'+i;
	    }
	}
	cout<<ch<<endl;
	

}
