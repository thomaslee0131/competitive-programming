#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int b=n;
    if(n%2==0)b++;
    int ans=(b+1)/2;
    cout<<ans<<endl;
    int x=1,y=1;
    for(int i=1;i<=n;i++){
        cout<<x<<' '<<y<<endl;
        if(x==ans)y++;
        else x++;
    }
}
