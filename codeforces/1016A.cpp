#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int w=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        w+=a;
        cout<<w/m;
        if(i==n-1)cout<<endl;
        else cout<<' ';
        w=w%m;
    }
}
