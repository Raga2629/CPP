class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long m=1e9+7;
        for(vector<int> q:queries){
        int idx=q[0];
        while(idx<=q[1]){
            nums[idx]=(1ll * nums[idx]*q[3])%m;
            idx+=q[2];
        }
        }
        int ans=0;
        for(int i:nums){
            cout<<i<<endl;
            ans^=i;
        }
        return ans;
    }

};