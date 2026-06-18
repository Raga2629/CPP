class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();       
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }

        // int m=*max_element(nums.begin(),nums.end());
        // vector<int> temp;
        // for(int i=0;i<n;i++){
        //     temp.push_back(i+1);
        // }
        // for(int i=0;i<n;i++){
        //     bool s=false;
        //     for(int j=0;j<n;j++){
        //         if(temp[i]==nums[j]){
        //             s=true;
        //             break;
        //         }
        //     }
        //     if(!s){
        //         ans.push_back(temp[i]);
        //     }
        // }
       
        
        return ans;
    }
};