#include<iostream>
using namespace std;
int a[100100];
int main(){
    int n,me=1,frien=1000000,md=0,fd=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]<=500000){
            md=a[i]-me;
        }
        else {fd=frien-a[i];break;}
    }
    if(fd>md)cout<<fd<<endl;
    else cout<<md<<endl;
}
