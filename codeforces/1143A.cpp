#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    for(int i=1;i<=n;i++){
        int d;
        cin>>d;
        if(d==1){
            l=i;
        }
        else r=i;
    }
    int ans=l>r?r:l;
    cout<<ans<<endl;
}
