class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        int n=nums.size(),ind1=-1,ind2=-1;
        for(int i=0;i<n;i++){
            if(mx<nums[i]){
                mx=max(mx,nums[i]);
                ind1=i;
            }
            if(mn>nums[i]){
                mn=min(mn,nums[i]);
                ind2=i;
            }
            
        }
        if(n<=2) return n;
        // int s1= ind1+1 + (n-ind2);
        // int s2=(n-ind1) + (ind2+1);
        // int s3;
        // if(ind1<ind2) s3=ind2+1;
        // else s3=(ind1+ind2);
        // int s4=(n-ind1)+(n-ind2);
        // int s5;
        // if(ind2<ind1) s5=n-ind2;
        // else s5=n-ind1;
        int s1,s2,s3;
        if(ind1>ind2) s1=ind1+1; else s1=ind2+1;
        if(ind1>ind2) s2=n-ind2; else s2=n-ind1;
        s3=min((ind1+n-ind2+1),(ind2+n-ind1+1));
        cout<<s1<<" "<<s2<<" "<<s3<<" ";
        return min(s1,min(s2,s3));
    }
};