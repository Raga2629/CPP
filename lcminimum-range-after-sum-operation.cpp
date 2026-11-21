class Solution {
public:
    int minRange(int a, int b, int c) {
        int mx=max({a,b,c});
        int mn=min({a,b,c});
        int range=mx-mn;
        vector<int> v={a,b,c};;
        sort(v.begin(),v.end());
        v[2]=v[0]+v[1];
        range=min(range,v[2]-v[0]);
        return range;
    }
};