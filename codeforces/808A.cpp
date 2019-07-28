#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans,t=1;
    cin>>n;
    if(n<10){
        cout<<1<<endl;
        return 0;
    }
    for(int i=1;i<=9;i++){
        t=t*10;
        if(n/t<10){
            break;
        }
    }
    ans=((n/t)+1)*t-n;
    cout<<ans<<endl;
}   
