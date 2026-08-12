class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //sliding window approach
        int mx=0,n=nums.size();
        unordered_map<int,int> freq;
        int i=0,j=0;
        for(j=0;j<n;j++){
            freq[nums[j]]++;

            while(freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            
            mx=max(mx,j-i+1);
            
        }
        return mx;

        // for(int i=0;i<nums.size();i++){
        //     int cnt=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(freq[nums[j]]<=k){
        //             cnt++;
        //             mx=max(mx,cnt);
        //         }
        //         else{
        //             cnt=0;
        //         }
        //     }
        // }
        return mx;
    }
};