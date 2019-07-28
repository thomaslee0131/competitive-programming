#include<iostream>
using namespace std;
int main(){
    cout<<"(1)encrypt (2)decrypt"<<endl;
    string s;
    int n;
    cin>>n;
    if(n!=1&&n!=2){cout<<"foolish"<<endl;return 0;}
    cin>>s;
    if(n==1){
        for(char &c:s){
            c++;
        }
    }
    else{
        for(char &c:s){
            c--;
        } 
    }
    cout<<s<<endl;
}
