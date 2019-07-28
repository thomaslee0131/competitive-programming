#include<iostream>
using namespace std;
int main(){
    char a;
    while(cin.get(a)){
        if(a=='\n'){
            cout<<endl;
        }
        else {a-=7; cout<<a;}
    }
}
