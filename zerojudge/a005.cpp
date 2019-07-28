#include<iostream>
using namespace std;
int n[5],d[4],r[4];
int main(){
    int a; cin>>a;
    while(a--){
        for(int i=0;i<4;i++){
            cin>>n[i];
            if(i){
                d[i-1]=n[i]-n[i-1];
                if(n[i]%n[i-1]==0)r[i-1]=n[i]/n[i-1];
                else r[i-1]=-1;
            }
        }
        for(int i=0;i<4;i++){
            cout<<n[i]<<' ';
        }
        if(d[0]==d[1]){
            cout<<n[3]+d[0]<<endl;
        }
        else cout<<n[3]*r[0]<<endl;
    }
}
