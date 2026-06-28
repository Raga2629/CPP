class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        for(int i=(int)nums.size()-1;i>=0;i--){
            
            if(k!=0){
            if(mul>=1){
                sum+=(long long)nums[i]*mul;
                mul--;
                k--;
            }
            else if(mul<1){
                sum+=nums[i];
                k--;
            }
           
            }
        }
        return sum;
        
    }
};