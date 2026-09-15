class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<n;i++){
           unordered_set<int> a(n);
            for(int j=i;j<n;j++){
               a.insert(nums[j]);
               if(a.size()==s.size()){
                cnt++;
               }
            }
        }
        return cnt;
    }
};