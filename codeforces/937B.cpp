#include<iostream>
using namespace std;
int main(){
    int p,y;
    cin>>p>>y;
    for(int i=y;i>p;i--){
        for(int j=2;j*j<=y;j++){
            //cout<<i<<" "<<j<<endl;
            if(i%j!=0){cout<<i<<endl;return 0;}
            else break;
        }
    }
    cout<<-1<<endl;
}
