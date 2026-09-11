class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size(),m=s2.size();
       if(n>m){
        return false;
       }
       bool ans=false;
       int c=0;
       vector<int>f(26,0),f1(26,0);
        for(int i=0;i<n;i++){
            f[s1[i]-'a']++;
            f1[s2[i]-'a']++;
        }
      
        if(f==f1){
            return true;
        }
        for(int i=n;i<m;i++){
            f1[s2[i]-'a']++;
            f1[s2[i-n]-'a']--;
            if(f==f1){
                return true;
            }
           
        }
        return false;

    }
};