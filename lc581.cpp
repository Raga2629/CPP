class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> t(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<n){
            if(nums[i]==t[i]){
                i++;
            }else{
                break;
            }
        }
        while(j>=0){
            if(nums[j]==t[j]){
                j--;
            }else{
                break;
            }
        }
        if(j-i+1 >0)
        return j-i+1;
        else return 0;
    }
};