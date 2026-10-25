class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int> freq;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==target)
                        freq[target]++;
                if(freq[target]*2 > (j-i+1)) cnt++;
            }
        }
        return cnt;
    }
};