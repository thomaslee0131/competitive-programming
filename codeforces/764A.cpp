#include<iostream>
using namespace std;
int main(){
    int n,m,z,c=0;
    cin>>n>>m>>z;
    for(int i=n;i<=z;i+=n){
        if(i%m==0) c++;
    }
    cout<<c<<endl;
}
