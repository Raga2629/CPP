class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max_water=0,cur=0;
        while(left<right){
            cur=min(height[left],height[right])*(right-left);
            max_water=max(max_water,cur);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};