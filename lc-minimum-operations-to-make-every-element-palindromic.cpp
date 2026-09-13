class Solution {
public:
    bool isPalin(long long n){
        int i=n,rev=0;
        while(n>0){
            int d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        if(i==rev) return true;
        return false;
    }
    long long minOperations(vector<int>& nums) {
        long long ans=0,n=nums.size();
        for(int num:nums){
            int ops=0;
            while(true){
               long long up=(long long)num+2*ops;
                long long down=(long long)num-2*ops;

                if(down>0 && isPalin(down) || isPalin(up)){
                   ans+=ops;
                   break;
                }
               ops++;
            }
        }
        return ans;
    }
};