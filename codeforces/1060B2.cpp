#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int m=10,ans=0;
    while(n){
        int num=n%m;
        if(n/m==0){
            ans+=n/(m/10);
        }
        if(num==9){
            ans+=9*m/10;
            n-=9;
            continue;
        }
        ans+=num/m*10+10;
        n-=num+10;
    }
    cout<<ans<<endl;
}
