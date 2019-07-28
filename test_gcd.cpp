#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main(){
    int a,b;
    while(cin>>a>>b){
        if(!a||!b){
            break;
        }
        cout<<gcd(a,b)<<endl;
    }
}
