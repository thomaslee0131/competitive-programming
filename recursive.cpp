#include<iostream>
using namespace std;
int n;
void p(int i){
    cout<<i<<' ';
    if(i==1){
        return;
    }
    p(i-1);
    cout<<i<<' ';
}
void pa(int i){
    cout<<i<<' ';
    if(i==n)return;
    pa(i+1);
    cout<<i<<' ';
}
int main(){
    while(cin>>n){
        if(!n)break;
        p(n);
        cout<<endl;
        pa(1);
    }
}
