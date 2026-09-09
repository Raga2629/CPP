class Solution {
public:
    long long countCommas(long long n) {
        long long comma=1, ans=0;
        long long start=1000;
        while(start <= n){
           long long end= start*1000-1;
            long long count= min(n, end)-start+1;
            ans+=count*comma;
            start*=1000;
            comma++;
        }
        return ans; 
    }
};