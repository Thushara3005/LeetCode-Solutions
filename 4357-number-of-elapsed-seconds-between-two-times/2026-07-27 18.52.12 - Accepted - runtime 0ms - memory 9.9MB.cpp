class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hour=stoi(startTime.substr(0,2));
        int mint=stoi(startTime.substr(3,2));
        int sec=stoi(startTime.substr(6));
        int hour1=stoi(endTime.substr(0,2));
        int mint1=stoi(endTime.substr(3,2));
        int sec1=stoi(endTime.substr(6));
        return (hour1*3600 + mint1*60+sec1)-(hour*3600 + mint *60+sec);
    }
};