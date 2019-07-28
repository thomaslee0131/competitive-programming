#include<iostream>
#include<algorithm>
using namespace std;
long long _abs(long long a,long long b){
    if(a-b<0){
        return b-a;
    }
    return a-b;
}
int main(){
    long long n,x,y;
    cin>>n>>x>>y;
    long long wsteps=max(_abs(x,1),_abs(y,1)),bsteps=max(_abs(x,n),_abs(y,n)); 
    if(wsteps<=bsteps){
        cout<<"White"<<endl;
    }
    else cout<<"Black"<<endl;
}
