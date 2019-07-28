#include<iostream>
using namespace std;
void change(string &s,int a,char c){
    s[a]=c;
}
int main(){
    string a="123456789";
    change(a,1,'6');
    cout<<a<<endl;
    int b[5]={1,2,3,4,5};
    int x=0;
    cout<<x[b]<<endl;
}
