class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt=0,mx=0;
        long long n=s.size();
        vector<bool> vis(128,false);
        int i=0,j=0;
        while(i<n && j<n){
        if(vis[s[j]]==false){
            vis[s[j]]=true;
            j++;
        }
        else{
            vis[s[i]]=false;
            i++;
        }
        mx=max(mx,j-i);
        }

        // for(int i=0;i<n-1;i++){
        //     if(s[i]!=s[i+1] && vis[s[i]-'a']!=true){
        //         cnt++;
        //         vis[s[i]-'a']=true;
        //         mx=max(mx,cnt);
        //     }
        //     else {
        //         cnt=0;
        //         for(int i=0;i<26;i++){
        //             vis[i]=false;
        //         }
        //     }
        // }
        return mx;
    }
};