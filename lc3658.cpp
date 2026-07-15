class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0,j=0;
        for(int i=0;i<n;i++){
            sumEven+=j;
            j+=2;
        }
        j=1;
        for(int i=0;i<n;i++){
            sumOdd+=j;
            j+=2;
        }
        return gcd(sumOdd,sumEven);

    }
};