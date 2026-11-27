#include <bits/stdc++.h>
using namespace std;

int main() {
    bool ans=false;
	string s,s1;
	getline(cin,s);
	getline(cin,s1);

	unordered_map<string,int> freq1;
	vector<string> actual1;
	unordered_map<string,int> freq;
	string a="";
	vector<string> actual;
	for(char i:s){
	    if(!(a.empty())&& (isspace(i) || ispunct(i) || isdigit(i))){
	        actual.push_back(a);
	        a="";
	    }
	    else if(isalpha(static_cast<unsigned char>(i))) a+=tolower(static_cast<unsigned char>(i));
	}
	if(!a.empty())
	actual.push_back(a);

   	a="";
	for(char i:s1){
	    if(!(a.empty())&& (isspace(i) || ispunct(i) || isdigit(i))){
	        actual1.push_back(a);
	        a="";
	    }
	    else if(isalpha(static_cast<unsigned char>(i)))
	    a+=tolower(static_cast<unsigned char>(i));
	}
	if(!a.empty())
	actual1.push_back(a);

    for(string c:actual){
        freq[c]++;
    }
    for(string c:actual1){
        freq1[c]++;
    }
    for(string i:actual){
        if(freq[i]==freq1[i]) ans=true;
        else {
            ans=false;
            break;
        }
    }
    for(string i:actual1){
        if(freq[i]==freq1[i]) ans=true;
        else{
            ans=false;
            break;
        }
    }
    if(freq==freq1) ans=true;else ans=false;
    if(ans){
        cout<<"The sentences are anagrams.";
    }else{
        cout<<"The sentences are not anagrams.";
    }
	
}
