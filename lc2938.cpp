class Solution {
public:
    long long minimumSteps(string s) {
        string a=s;
        int n=s.size();
        sort(a.begin(),a.end());
        // int cnt=0;
        // while(true){
        //     for(int i=0;i<n-1;i++){
        //         if(s[i]='1' && s[i+1]=='0'){
        //             s[i]='0';
        //             s[i+1]='1';
        //             cnt++;
        //         }
        //     } 
        //     if(a==s){
        //         break;
        //     }
        // }

        long long ans=0;
      int o=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                o++;
                long long cnt=0;
                for(int j=i+1;j<n;j++){
                    if(s[j]=='0'){
                        cnt++;
                    }
                    else{
                        break;
                    }
                }
                ans+=(o*cnt);
            }
            
        }
        return ans;
    }
};