class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int cnt=0;
        for(int i:nums){
            freq[i]++;
        }
        for(auto x:freq){
            if(k==0){
            if(x.second > 1) cnt++;
            }
            else if(freq.find(x.first+k)!=freq.end()){
                cnt++;
            }
        }
        // int cnt=0,n=nums.size();
        // sort(nums.begin(),nums.end());
        // int i=0,j=n-1;
        // while(i<j){
        //     if(abs(nums[j]-nums[i])==k){
        //         cnt++;
        //         i++;
        //     }
        //     else if(abs(nums[j]-nums[i])<k){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }

        // }
        return cnt;
    }

};