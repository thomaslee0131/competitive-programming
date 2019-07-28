#include<iostream>
#include<algorithm>
using namespace std;
int n;
int sc[1001][4];
int sum[1001];
int main(){
    cin>>n;
    int t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>sc[i][j];
            if(i==0){
                t=t+sc[i][j];
            }
            sum[i]+=sc[i][j];
        }
    }
    sort(sum,sum+n);
    //cout<<sum[n-3]<<' '<<t<<endl;
    for(int i=n-1;i>=0;i--){
        if(sum[i]==t){
            cout<<n-i<<endl;
            return 0;
        }
    }
}
