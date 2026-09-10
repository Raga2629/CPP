class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int> freq;
        for(char i:s){
            freq[i]++;
        }
        int m=min(freq['a'],freq['b']);
        return s.size()-(2*m);
    }
};