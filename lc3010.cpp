class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=0;
        sort(nums.begin()+1,nums.end());
        for(int i=0;i<3;i++){
            sum+=nums[i];
        }
        return sum;
    }
};