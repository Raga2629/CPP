class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // vector<long long> pre(nums.size());
        if(k<=1) return 0;
        long long m=1e9+7,left=0,ans=1,cnt=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
            ans*=nums[right];
            while(ans>=k){
                ans /= nums[left];
                left++;
            }
            cnt+=right-left+1;
        }
        // int cnt=0;
        
        // for(int i=0;i<n;i++){
        //     long long ans=1;
        //     for(int j=i;j<n;j++){
        //         ans=(ans*nums[j])%m;
        //         if(ans<k){
        //             cnt++;
        //         }
        //         else break;
        //     }
        // }
        return cnt;

    }
};