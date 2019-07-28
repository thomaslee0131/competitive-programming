#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1||n==2){
        cout<<"No"<<endl;
        return 0;
    }
    else{
        cout<<"Yes"<<endl;
        int a;
        if(n%2==0){
            a=n/2;
        }
        else{
            a=n;
        }
        cout<<1<<' '<<a<<endl;
        cout<<n-1<<' ';
        for(int i=1;i<=n;i++){
            if(i==a)continue;
            cout<<i;
            if(i!=n)cout<<' ';
            else cout<<endl;
        }
    }
}
