class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum=0;
        for(int i:nums){
            sum+=i;
        }
        long long s=sum-x,mx=INT_MIN;
        long long left=0,su=0;
        for(int right=0;right<nums.size();right++){
            su+=nums[right];
            while(su>s && left<=right){
                su=su-nums[left]; 
                left++;
            }
            if(su==s){
                mx=max(mx,right-left+1);
            }
        }
        if(mx==INT_MIN) return -1;
        else return nums.size()-mx;


    }
};