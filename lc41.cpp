class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        // this takes O(n) space, O(n) time
       vector<bool> s(n+1,false);

        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]<=n){
                s[nums[i]]=true;
            }
        }

        //first missing number from 1 (smallest positive integer)
        for(int i=1;i<=n;i++){
            if(!s[i]){
                return i;
            }
        }
        // if all are there, then smallest positive integer would be n+1
        return n+1;
    }
};