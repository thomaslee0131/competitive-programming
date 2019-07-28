#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n==m){cout<<0<<endl;return 0;}
    if(((m/n)%2!=0  &&  (m/n)%3!=0)  ||  m%n!=0){cout<<-1<<endl;return 0;}
    int ans=0;
    while((m/n)%2==0  &&  m%n==0){
        n*=2;
        ans++;
    }
    while((m/n)%3==0  &&  m%n==0){
        n*=3;
        ans++;
    }
    if(n!=m){cout<<-1<<endl;return 0;}
    cout<<ans<<endl;
}
