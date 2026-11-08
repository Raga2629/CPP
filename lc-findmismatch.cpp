class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        if(s1==s2){
            return ans;
        }
        string s="",t="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                s+=s1[i];
                t+=s2[i];
            }else{
                if(!s.empty()&&!t.empty())
                ans.push_back({s, t});
                s="";
                t="";
            }
        }
        if(!s.empty() && !t.empty())
        ans.push_back({s,t});
        return ans;
    }
};