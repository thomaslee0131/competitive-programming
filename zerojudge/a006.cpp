#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        int d=b*b-4*a*c;
        if(d<0){
            cout<<"No real root"<<endl;
        }
        else if(d==0){
            cout<<"Two same roots x="<<-b/(2*a)<<endl;
        }
        else{
            cout<<"Two different roots x1="<<(int)(-b+sqrt(d))/(2*a)<<" , x2="<<(int)(-b-sqrt(d))/(2*a)<<endl;
        }
    }
}
