class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
       vector<int> pre(n);
       int mx=nums[0];
       for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            pre[i]=gcd(nums[i],mx);
       }
       sort(pre.begin(),pre.end());
       long long sum=0;
       
        for(int i=0;i<n/2;i++){
            sum+=gcd(pre[i],pre[n-i-1]);
        }
       
       return sum;
    }
};