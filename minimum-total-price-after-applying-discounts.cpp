class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double n=prices.size(),m=discounts.size();
        double sum=0.0;
        int x=min(m,n);
        for(int i=0;i<x;i++){
            double price=prices[n-1-i];
            double discount=discounts[m-1-i];
            sum+=(price*(100.0-discount))/100.0;
        }
        for(int i=0;i<n-x;i++){
            sum+=prices[i];
        }
        
        return sum;
    }
};