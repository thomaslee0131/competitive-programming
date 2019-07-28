#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    if((n-2)%3!=0){
        cout<<1<<' '<<1<<' '<<n-2<<endl;
        return 0;
    }
    if((n-3)%3!=0){
        cout<<1<<' '<<2<<' '<<n-3<<endl;
    }
    else cout<<2<<' '<<2<<' '<<n-4<<endl;
}
