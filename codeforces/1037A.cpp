#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    while(n){
        ans++;
        n/=2;
    }
    cout<<ans<<endl;
}
