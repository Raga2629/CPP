class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=stoi(num1);
        int m=stoi(num2);
        int s=n+m;
        return to_string(s);
    }
};