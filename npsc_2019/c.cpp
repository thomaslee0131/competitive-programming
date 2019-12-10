#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int fir;
    bool yes = 1;
    for(int i=0;i<n;i++){
        int a; cin>>a; 
        if(i==0){
            fir = a;
            continue;
        }
        if(a!=fir){
            yes = 0;
        }
    }
    if(yes)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
