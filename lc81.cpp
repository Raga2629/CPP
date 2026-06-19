class Solution {
public:
    bool search(vector<int>& nums, int target) {
        auto it = std::find(nums.begin(), nums.end(), target);
        if(it!=nums.end()) return true;
        return false;
        // sort(nums.begin(),nums.end());
        // int i=0,j=nums.size();
        // if(nums.size()==1 && nums[0]!=target) return false;
        
        // while(i<=j){
        //     int mid=(i+j)/2;
        //     if(nums[mid]==target){
        //         return true;
        //     }
        //     else if (nums[mid]<target){
        //         i=mid+1;
        //     }
        //     else{
        //         j=mid-1;
        //     }
        // }
        // return false;
    }
};