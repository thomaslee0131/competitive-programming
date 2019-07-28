#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n==2){
        cout<<"No"<<endl;
        return 0;
    }
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    //cout<<sum<<endl;
    for(int i=2;i<=n;i++){
        if(sum%i==0){
            cout<<"Yes"<<endl;
            cout<<1<<' '<<i<<endl;
            cout<<n-1<<' ';
            for(int j=1;j<=n;j++){
                if(j==i)continue;
                cout<<j;
                if(j!=n)cout<<' ';
                else cout<<endl;
            }
            return 0;
        }
    }
    cout<<"No"<<endl;
}
