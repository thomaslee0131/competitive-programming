#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(m==0){
        cout<<1<<endl;
        return 0;
    }
    if(m>(n/2)){
        ans=n-m;
    }
    else{
        ans=m;
    }
    cout<<ans<<endl;
}
