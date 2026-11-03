class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int s=0;
        for(int i:nums){
            s+=mx-i;
        }
        return s;
    }
};