class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
     
        vector<int> a;
        string s="123456789";
        for(int i=2;i<=9;++i){
            for(int j=0;j<=9-i;++j){
                string sub=s.substr(j,i);
                int ans=stoi(sub);
                if(ans>=low && ans<=high){
                    a.push_back(ans);
                }
            }
        }
  
    //     int sum=0;
    //     int m=1;
    //    while(sum<high){
    //     sum=0;
    //     long long k=m;
    //     for(int i=1;k<=n1;i*=10){
    //         sum+=k*(100/i);
    //         k++;
    //     }
    //     ans.push_back(sum);
    //     m++;
    // }
    return a;
    // }
    }
};