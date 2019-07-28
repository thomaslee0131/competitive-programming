#include <iostream>
using namespace std;
int main(){
    int p,y;
    bool c=true;
    cin>>p>>y;
    for(int i=y;i>p;i--){
        c=true;
        for(int j=2;j*j<=i&&j<=p;j++){
            
            if(i%j==0){
                c=false;
                break;
            }
        }
        if(c==true){cout<<i<<endl; return 0;}
    }
    cout<<-1<<endl;
}
