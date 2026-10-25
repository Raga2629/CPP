class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long n=nums.size();
        long long sum=0;
        int v=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                v=i;
            }
            sum+=i-v;
        }
        // for(int i=0;i<n;i++){
        //     vector<long long>t;
        //     int mn=INT_MAX,mx=0;
        //     for(int j=i;j<n;j++){
        //         mn=min(mn,nums[j]);
        //         mx=max(mx,nums[j]); 
        //         if(mn>=minK && mx<=maxK){
        //             cnt++;
        //         }
        //     }
        // }
        
        return sum;
    }
};