class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> s;
        s.push(0);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                ans[s.top()]=abs(s.top()-i);
                s.pop();
            }
            s.push(i);
        }
        // for(int i=0;i<n;i++){
        //     int c=0;
        //     for(int j=i+1;j<n;j++){
        //         if(temperatures[j]>temperatures[i]){
        //             c=j-i;
        //             break;
        //         }
        //     }
        //     ans[i]=c;
        // }
         return ans;
    }
};