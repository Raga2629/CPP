class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums=nums1;
        for(int i:nums2){
            nums.push_back(i);
        }
        sort(nums.begin(),nums.end());
        double ans=0;
        int mid=nums.size()/2;
        if(nums.size()%2==0){
            ans=(nums[mid]+nums[mid-1])/2.0;
        }
        else{
            ans=nums[mid];
        }
        return ans;
    }
};