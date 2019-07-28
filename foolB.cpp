#include<iostream>
using namespace std;
int main(){
    string s;
    bool a=0;
    for(int i=0;i<9;i++){
        cout<<i<<endl;
        cin>>s;
        if(s=="cool")a=1;
    }
    if (a==0){
        cout<<"grumpy"<<endl;

    }
    else cout<<"normal"<<endl;
}
