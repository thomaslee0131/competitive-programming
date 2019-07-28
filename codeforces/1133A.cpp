#include<iostream>
using namespace std;
int main(){
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;
    int minu=0;
    minu+=(h2+h1)*60+m1+m2;
    minu/=2;
    int hh=minu/60;
    if(hh<10)cout<<'0';
    cout<<hh<<':';
    int mm=minu%60;
    if(mm<10)cout<<'0';
    cout<<mm<<endl;
}
