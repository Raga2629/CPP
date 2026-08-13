#include <bits/stdc++.h>
using namespace std;

bool isValid(int mid, vector<int> &arr, int k){
    int partition=1;
    int j=1,i=0,n=arr.size();
    int diff=0;
    while(i<n && j<n){
        int diff=arr[j]-arr[i];
        
        if(diff<mid){
            j++;
            // diff=abs(arr[j]-arr[i]);
        }
        else{
            //  diff=0;
            partition++;
            i=j;
            j++;
        }
    }
    if(partition>=k) return true;
        else return false;
}
int solve(vector<int> &arr, int n, int k){
    int low=0;
    int mx=*max_element(arr.begin(),arr.end());
    int mn=*min_element(arr.begin(),arr.end());
    int high=mx-mn;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(isValid(mid,arr,k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<solve(a,n,k)<<"\n";
 
    }

    return 0;
}