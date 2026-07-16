class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn=INT_MAX;
        int sum=0,j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                mn=min(mn,abs(j-i)+1);
                sum-=nums[j];
                j++;
            }
        }
        if(mn==INT_MAX) 
        return 0;
        return mn;
    }
};