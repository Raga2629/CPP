class Solution {
public:
    int lc930(vector<int>& nums,int goal){
        int cnt=0,n=nums.size();
        if(goal<0) return 0;
        int l=0,r=0,sum=0;
        for(int r=0;r<n && l<n;r++){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=lc930(nums,goal)-lc930(nums,goal-1);
        return cnt;
    }
};

//sliding window technique - less than and equal to unna subarrays count chestunnam last lo less than ante -1 chesthe saripothadi kada, less than unna subarrays count chesthanam so that manaki number of subarrays that are equal to goal thelusthadi.... if we directly find the equal equal then we will miss some subarrays 
// if sum>goal - we shrink the window size