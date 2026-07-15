class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums[nums.size()-1];i++){
            if (std::find(nums.begin(), nums.end(), i) == nums.end()){
                return i;
            }
        }
        if(nums[nums.size()-1]<0) return 1;
        return nums[nums.size()-1]+1;
    }
};