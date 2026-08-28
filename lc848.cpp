class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long n=shifts.size(),m=s.size();
        vector<long long> pre(n);
        long long sum=accumulate(shifts.begin(),shifts.end(),0LL);
        pre[0]=sum;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]-shifts[i-1];
        }
        int j=0;
        for(int i=0;i<m;i++){
            j=(s[i]-'a'+pre[i])%26;
            s[i]=j+'a';
        }
        return s;
    }
};