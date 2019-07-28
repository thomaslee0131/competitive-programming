#include <iostream>
using namespace std;
int main(){
    int x,h,m,min=0;
    cin>>x>>h>>m;
    for(int i=1;i<=1440;i++){
        if(h-(h/10)*10==7||m-(m/10)*10==7){
            break;
        }
        m-=x;
        if(m<0){
            m=60+m;
            h--;
        }
        if(h<0){
            h=23;
        }
        min=i;
    }
    cout<<min<<endl;
}
