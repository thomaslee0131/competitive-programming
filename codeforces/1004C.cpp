#include<iostream>
using namespace std;
bool seen[100010];
bool used[100010];
int num[100010];
int dif[100010];
int main(){
    int n;
    cin>>n;
    int di=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(!seen[num[i]]){
            di++;
            seen[num[i]]=1;
        }
        dif[i]=di;
    }
    long long  ans=0;
    for(int i=n-1;i>=0;i--){
        if(!used[num[i]]){
            ans+=dif[i-1];
            used[num[i]]=1;
        }
    }
    /*for(int i=0;i<n;i++){
        cout<<dif[i]<<endl;
    }*/
    cout<<ans<<endl;
}
