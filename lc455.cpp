class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,cnt=0;
        int n=g.size(),m=s.size();
        while(i<vn && j<m){
            if(g[i]<=s[j]){
                cnt++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return cnt;
    }
};