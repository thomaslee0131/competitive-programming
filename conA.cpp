#include<iostream>
using namespace std;
int main(){
    long long a,b,x,y,z,asum=0,bsum=0;
    cin>>a>>b>>x>>y>>z;
    asum=-(a-2*x-y);
    bsum=-(b-3*z-y);
    if(asum<0){
        asum=0;
    }
    if(bsum<0){
        bsum=0;
    }
    cout<<asum+bsum<<endl;
    
}
