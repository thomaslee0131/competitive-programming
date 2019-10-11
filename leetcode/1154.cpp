class Solution {
public:
    int dayOfYear(string date) {
        int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int y=atoi(date.substr(0,4).c_str());        
        int m=atoi(date.substr(5,2).c_str());
        int d=atoi(date.substr(8,2).c_str());
        if((y%4 == 0 && y%100 != 0) || y%400 == 0){
            a[1]=29;
        }
        int res=0;
        for(int i=0;i<m-1;i++){
            res+=a[i];
        }
        res+=d;
        return res;
    }
};
