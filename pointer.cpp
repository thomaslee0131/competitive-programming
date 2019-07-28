#include<iostream>
using namespace std;
int main(){
    int n[3];
    int *p=&n[0];
    cout<<*p<<endl;
    *p+=4;
    cout<<*p<<endl;   
}
