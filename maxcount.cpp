#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


    pair<int,int> mostFrequent(int N,vector<int> &A) {
        // write your code here 
        pair<int,int> ans;
        int mx=0;
        int mn=-1;
        unordered_map<int,int> freq;
        for(int i=0;i<N;i++){
            freq[A[i]]++;
        }
        for(auto const&[val,cnt]:freq){
            if(cnt>mx){
                mx=cnt;
                mn=val;
            }
            else if(cnt==mx){
                mn=min(mn,val);
            }
        }
      
        return {mn,mx};
    }

