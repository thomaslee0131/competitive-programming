class Solution {
public:
    
    string dayOfTheWeek(int day, int month, int year) {
        string wdays[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int d=0;
        for(int i=1971;i<year;i++){
            if((i%4==0 && i%100!=0) || i%400==0)
                d+=366;
            else 
                d+=365;
        }
        if((year%4==0 && year%100!=0) || year%400==0){
            days[1]++;
        }
        for(int i=0;i<month-1;i++){
            d+=days[i];
        }
        d+=day;
        d%=7;
        d=(d+4)%7;
        return wdays[d];
    }
};
