#include <iostream>
using namespace std;
int main(){
    long double n,m,a,b;
    long double ans=0,tem;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        tem=a/b*m;
        if(i==1)ans=tem;
        else ans=min(tem,ans);
    }
    cout<<ans;
}
