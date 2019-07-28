#include<iostream>
using namespace std;
int main(){
    int n,m,z;
    cin>>n>>m>>z;
    if(n>m  &&  z<n-m){
        cout<<'+'<<endl;
        return 0;
    }
    if(m>n  &&  m-n>z){
        cout<<'-'<<endl;
        return 0;
    }
    if(n==m  &&  z==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<'?'<<endl;
}
