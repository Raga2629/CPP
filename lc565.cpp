class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        vector<bool> vis(n,false);
        int k=0,cnt=1,mx=0;
        for(int i=0;i<n;i++){
              k=nums[i],cnt=0;
              while(k<n && vis[k]==false){
                cnt++;
                vis[k]=true;
                k=nums[k];
              }
            mx=max(mx,cnt);
        }
        return mx;
    }
};