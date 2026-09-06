class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long m=1e9+7;
        long long n=nums.size(),c=0;

        long long sum1=0,sum2=0;
        int k=n/2;
        for(int i=0;i<k;i++){
            sum1+=nums[i];         
        }
        for(int i=k;i<n;i++){
            sum2+=nums[i];
        }
        // if(sum1>sum2) c++;
        
        for(int i=0;i<n;i++){
            sum1=sum1-nums[i]+nums[(i+k)%n];
            sum2=sum2-nums[(i+k)%n]+nums[i];
            if(sum1>sum2){
                c++;
            }
            
            
        }
        return c;
    }
};