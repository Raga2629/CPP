class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1,temp2;
        for(int i:nums){
            if(i>=0){
                temp1.push_back(i);
            }
            else if(i<0){
                temp2.push_back(i);
            }
        }
        int j=0,k=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(temp1[j]);
                j++;
            }
            else{
                ans.push_back(temp2[k]);
                k++;
            }
         
        }
        return ans;
    }
};