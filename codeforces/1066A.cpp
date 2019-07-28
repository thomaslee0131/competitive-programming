#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int L,v,l,r;
        cin>>L>>v>>l>>r;
        int a=L/v;
        int b=l/v;
        int c=r/v;
        int ans=a-c+b;
        if(l%v==0)ans--;
        cout<<ans<<endl;
    }
}
