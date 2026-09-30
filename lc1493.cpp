class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0;
        int mx=0;
        int cnt=0;
        while(left<n && right<n){
                //rendu pointers 0 ee untayi....left unchi right move chestam,if more that one zeroes osthe remove cheyali left pointer ni move chestam, until we get zero, if we get zero- we update the left to the current zero + 1
                if(nums[right]==0){
                    cnt++;
                }
                right++;//window
            
            while(cnt>1){
                if(nums[left]==0){
                    cnt--;
                }
                left++;//window
            }
            mx=max(mx,right-left-1);
            
        }
        return mx;
    }
};