#include<iostream>
using namespace std;
const int prime =101;
int inv(int a,int p=prime,int n=1,int m=0){
    if(a==1){
        return n;
    }
    return inv(p%a,a,m-p/a*n,n);
}
int main(){
    cout<<inv(5)<<endl;
}
