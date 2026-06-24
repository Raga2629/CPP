class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0];
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=i;j<nums.size();j++){
                product*=nums[j];
                mx=max(mx,product);
            }
        }
        return mx;
    }
};