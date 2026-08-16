class Solution {
public:
    int maximumGap(string skill, string station) {
        vector<int> a,a2;
        
        int mx=0;
        int j=0,n=skill.size(),m=station.size();
        if(n<=1) return 0;
        for(int i=0;i<n;i++){
            while(j<m && skill[i]!=station[j]){
                
                j++;
            }a.push_back(j);j++;
            
        }
        j=m-1;
        for(int i=n-1;i>=0;i--){
            while(j>=0 && skill[i]!=station[j]){
                j--;
            }
            a2.push_back(j); j--;
        }
        reverse(a2.begin(),a2.end());
        for(int i=0;i<n-1;i++){
            mx=max(mx,a2[i+1]-a[i]);
        }
        return mx;
    }
};