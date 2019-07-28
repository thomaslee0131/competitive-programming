#include<iostream>
using namespace std;
int co[100];
int main(){
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>co[i];
    }
    int ans=2;
    for(int i=1;i<n;i++){
        if(co[i]-co[i-1]<d*2){
            continue;
        }
        if(co[i]-co[i-1]==d*2){
            ans++;
            continue;
        }
        ans+=2;
    }
    cout<<ans<<endl;
}
