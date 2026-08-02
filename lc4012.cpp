class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n=tasks.size();
        int m=shifts.size();
        int k=0;
        vector<int> ans;
        vector<long long>pre(n);
        pre[0]=tasks[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+tasks[i];
        }
        long long i=0;
        long long current=0;
        for(long long k:shifts){
            long long cnt=n;
            current+=k;
            if(pre[n-1]<=current){
                ans.push_back(0);
                current=0;
                continue;
            }
            auto it=std::upper_bound(pre.begin(),pre.end(),current);
            int comp=std::distance(pre.begin(),it);
        //  for(long long i=0;i<n;i++){
        //     if( pre[i]<=current){
        //         cnt--;
        //     }
        //  }
         ans.push_back(n-comp);
        }
        return ans;   
    }
};