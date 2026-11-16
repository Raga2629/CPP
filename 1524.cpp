class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n);
        pre[0]=arr[0];
       
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }
        int ans=0;
        int odd=0,even=1;
         int m=1e9+7;
        for(int i=0;i<n;i++){
            if(pre[i]%2==0){
                even++;
                ans=(ans+odd)%m;
            }else{
                odd++;
                ans=(ans+even)%m;
            }
        }
        // int cnt=0;
        // for(int i:ans){
        //     if(i%2!=0) cnt++;
        // }
       
        return ans%m;
    }
};