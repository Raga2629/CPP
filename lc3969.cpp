class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
       
       int cnt=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
             
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                 int ld=sum%10;
                long long n=sum;
                while(n>=10){
                    n/=10;
                }
                long long fd=n;
                if(ld==x && fd==x){
                 cnt++;
            }
            }
        }
        return cnt;
    }
};