#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(!a){
        return b;
    }
    return gcd(b%a,a);
}

int main(){
    int a,b;
    while(cin>>a>>b){
        if(!a  &&  !b){
            return 0;
        }
        int _gcd=gcd(a,b);
        cout<<a/_gcd<<' '<<b/_gcd<<endl;
    }
}
