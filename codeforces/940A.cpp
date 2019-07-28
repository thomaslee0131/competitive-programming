#include<iostream>
int f[5010];
using namespace std;
int main(){
    int n,next;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>f[i];
    for(int i=1;i<=n;i++){
        next=f[i];
        next=f[next];
        next=f[next];
        if(next==i){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
