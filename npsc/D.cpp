#include<iostream>
using namespace std;
long long a[10];
int main(){
    for(long long  i=1;i<=9;i++){
        cin>>a[i];
    }
    long long ans=a[2]+a[5]+a[8]-a[1]-a[6]-a[7];
    ans/=3;
    cout<<ans<<endl;
}

