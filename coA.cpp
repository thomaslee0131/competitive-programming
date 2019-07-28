#include<iostream>
int a[50];
int ans[1010];
bool c[1010];
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(c[a[i]]==0){
            ans[cnt]=a[i];
            cnt++;
            c[a[i]]=1;
        }
    }
    cout<<cnt<<endl;
    for(int i=cnt-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
