class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long cnt=0,sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum >= k*threshold){
            cnt=1;
        }
        for(int i=k;i<arr.size();i++){
            sum+=arr[i]-arr[i-k];
            if(sum >= k*threshold){
                cnt++;
                
            }
           
        }
        // for(int i=0;i<arr.size();i++){
        //     int sum=0;
        //     for(int j=i;j<arr.size();j++){
        //         sum+=arr[j];
        //         if(j-i+1==k && (sum/k)>=threshold){
        //             cnt++;
        //         }
        //     }
        // }
        return cnt;
    }
};