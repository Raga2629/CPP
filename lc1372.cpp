class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,xr=0;
        int j=0;
     
        for(int i=j;i<n;i++){
            xr^=nums[i];
            if(nums[i]==0){
                cnt++;
            }     
            
        }
        if(cnt==n){
            return 0;
        }
        if(xr==0){
            return n-1;
        }
        else if(xr!=0){
            return n;
        }
        else return 0;
        // return cnt;
    }
};