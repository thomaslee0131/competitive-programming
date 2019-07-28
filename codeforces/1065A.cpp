#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s,a,b,c;
        cin>>s>>a>>b>>c;
        long long canbuy=s/c;
        long long free=(canbuy/a)*b;
        long long ans=canbuy+free;
        cout<<ans<<endl;
    }
}
