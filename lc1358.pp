class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0,n=s.size();
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<=n-i;j++){
        //         string t=s.substr(i,j);
        //         if(t.contains("a") && t.contains("b") && t.contains("c")) {
        //             cnt++;
        //         }
        //     }
        // }
        int la=-1,lb=-1,lc=-1;

        //storing the last seen values and getting the minimum of them.

       for(int right=0;right<n;right++){
            if(s[right]=='a') la=right;
            if(s[right]=='b') lb=right;
            if(s[right]=='c') lc=right;
            if(la!=-1 && lb!=-1 && lc!=-1){
                cnt+=(1+ min({la,lb,lc}));
            }
       }
        return cnt;
    }
};