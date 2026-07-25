class Solution {
public:
    int maxProduct(int n) {
        int x=n;
        vector<int> a;
        while(x>0){
            int d=x%10;
            a.push_back(d);
            x/=10;
        }
        sort(a.begin(),a.end());
        return (a[a.size()-1]* a[a.size()-2]);
    }
};