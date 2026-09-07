class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> pre(n);
        pre[0]=pref[0];
        for(int i=1;i<n;i++){
            int x=pref[i]^pref[i-1];
            pre[i]=x;
        }
        return pre;
    }
};