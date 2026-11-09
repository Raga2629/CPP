#include<numeric>
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> temp=nums;
        vector<int>ans;
        int n=nums.size();
        for(int i:nums){
            int x=i,sum=0;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
            ans.push_back(sum);
        }
        vector<int> indices(n);
        std::iota(indices.begin(),indices.end(),0);

        sort(indices.begin(),indices.end(),[&](int a,int b){        //sorted array according to index
            if(ans[a]==ans[b])
                return nums[a]<nums[b];
            return ans[a]<ans[b];
        });
        
        vector<int> sorted(n);
        for(int i=0;i<n;i++){
            sorted[indices[i]]=i;
        }
        vector<int> visited(n,0);
        int cycle=0;
        for(int i=0;i<n;i++){
        if(!visited[i]){
            cycle++;            //cycle detection 
            int j=i;
            while(!visited[j]){
                visited[j]=1;
                j=sorted[j];
            }
        }
        }
        return n-cycle;
    }
};