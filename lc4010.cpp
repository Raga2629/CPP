class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
     
        long long n=nums.size(),mx=LLONG_MIN;
        long long ans=0,o=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long x=1LL*nums[i]*nums[j];
                long long y=__gcd(nums[i],nums[j]);
                int o=(y*y*1LL);
                if(y==0) continue;
                ans=(x/o)*1LL;
                
                mx = max(mx,ans);
            }
            
        }
        return mx;
    }
};