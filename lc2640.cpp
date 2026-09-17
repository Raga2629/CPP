class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<int> mx(n);
        mx[0]=nums[0];
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
        }
        vector<long long>con(n);
        con[0]=mx[0]+nums[0];
        for(int i=1;i<n;i++){
            con[i]=con[i-1]+mx[i]+nums[i];
        }
        return con;

    }
};