class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> ans;
        int sum=0;
        vector<bool> isPrime(n+1,true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(isPrime[i] && sum+i<=s){ 
                ans.push_back(i);
                sum+=i;
            }
        }

        return ans;
    }
};