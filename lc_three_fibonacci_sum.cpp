class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n<=1) return false;
        long long sum=0;
        long long a=0,b=1,c=1;
        while(a+b+c!=n && a+b+c<n){
            long long t=b+c;
            a=b;
            b=c;
            c=t;
            sum=a+b+c;
            if(sum==n) return true;
        }
        if(a+b+c==n) return true;
        return false;
    }
};