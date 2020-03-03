class Solution {
public:
    
    bool isleap(int y1){
        return (y1%4 == 0 && y1%100 != 0) || y1%400 == 0;
    }
    
    int calc(string date1){
        int d1 = stoi(date1.substr(8, 2));
        int m1 = stoi(date1.substr(5, 2));
        int y1 = stoi(date1.substr(0, 4));
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days1 = 0;
        for(int i = 1971; i < y1; i++){
            if(isleap(i)){
                days1 += 366;
            }
            else days1 += 365;
        }
        if(isleap(y1)){
            months[1] = 29;
        }
        for(int j = 0; j < m1-1; j++){
            days1 += months[j];
        }
        days1 += d1;
        return days1;
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(calc(date1) - calc(date2));
    }
};
