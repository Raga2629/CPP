class Solution {
public:
    int minOperations(string s) {
        string t=s;
        sort(t.begin(),t.end());
        if(t==s) return 0;
        int cnt=0,n=s.size();
        char mx=*max_element(s.begin(),s.end());
        char mn=*min_element(s.begin(),s.end());
        if(s[0]==mn || s[n-1]==mx) return 1;
        if(n==2) return -1;
        for(int i=1;i<n-1;i++){
            if(s[i]==mn || s[i]==mx){
                return 2;
            }
        }
        return 3;
        
    }
};