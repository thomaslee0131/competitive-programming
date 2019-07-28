#include<iostream>
using namespace std;
long long gcd(a,b){
 
}
int main(){
    long long l,r,x,y,cnt=0;
    cin>>l>>r>>x>>y;
    for(long long i=l;i<=r;i++){
        if(y%i==0  &&  i%x==0){cnt++;cout<<"i="<<i<<endl;}
    }
    cout<<cnt<<endl;
}
