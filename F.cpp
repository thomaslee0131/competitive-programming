#include<iostream>
using namespace std;
int main(){
    int y,m,d,x,t;
    cin>>y>>m>>d>>x>>t;
    if(x==6  ||  x==7){
        if(t==0)cout<<"happy"<<endl;
        else cout<<"unhappy"<<endl;
    }
    else{
        if(t==0)cout<<"unhappy"<<endl;
        else cout<<"happy"<<endl;
    }
}
