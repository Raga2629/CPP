class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
      int h=stoi(startTime.substr(0,2));
      int m=stoi(startTime.substr(3,2));
      int s=stoi(startTime.substr(6,7));
     int h1=stoi(endTime.substr(0,2));
      int m1=stoi(endTime.substr(3,2));
      int s1=stoi(endTime.substr(6,7));
     int t1=h*3600 + m*60 +s;
        int t2=h1*3600 + m1*60 + s1;
        
        return abs(t2-t1);
    }
};