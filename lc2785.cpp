class Solution {
public:
    string sortVowels(string s) {
       vector<char> temp;
       for(char i:s){
        if(i=='a'|| i=='e'||i=='o'||i=='u'||i=='i'||i=='A'|| i=='E'||i=='O'||i=='U'||i=='I'){
            temp.push_back(i);
        }
       }
       sort(temp.begin(),temp.end());
       int j=0;
       for(char &i:s){
        if(i=='a'|| i=='e'||i=='o'||i=='u'||i=='i'||i=='A'|| i=='E'||i=='O'||i=='U'||i=='I'){
            i=temp[j];
            j++;
        }
       }
       return s;
    }
};