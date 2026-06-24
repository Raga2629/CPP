class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mx=INT_MIN,mn=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
                mx=max(mx,nums[i]);
                mn=min(mn,nums[i]);
        }
        return (long long)(mx-mn)*k;
    }
};