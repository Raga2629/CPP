class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size();
        vector<int> a;
        if(n>s.size()){
            return a;
        }    
        int m=s.size();
        vector<int> f1(26,0),f2(26,0);

        for(int i=0;i<n;i++){
            f1[p[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            f2[s[i]-'a']++;
        }
        if(f1==f2) a.push_back(0);
        for(int i=n;i<m;i++){
            f2[s[i]-'a']++;
            f2[s[i-n]-'a']--;
          
            if(f1==f2) a.push_back(i-n+1);
        }
        return  a;
    }
};