#include<iostream>
using namespace std;
int d[106];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    int lp=0,rp=n-1,ans=0;
    while(d[lp]<=k  ||  d[rp]<=k){
        if(ans==n){
            break;
        }
        if(d[lp]<=k){
            lp++;
            ans++;
            //cout<<"-"<<d[lp-1]<<endl;
            continue;
        }
        if(d[rp]<=k){
            rp--;
            //cout<<"-"<<d[rp+1]<<endl;
            ans++;
        }
    }
    cout<<ans<<endl;
}
