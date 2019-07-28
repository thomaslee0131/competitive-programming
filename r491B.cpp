#include<iostream>
using namespace std;
int t[6];
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        t[a]++;
    }
    float least=4.5*n;
    if(sum>=least){
        cout<<0<<endl;
        return 0;
    }
    int i=2,ans=0;
    while(i<=5){
        if(t[i]==0){i++;continue;}
        sum=sum+5-i;
        t[i]--;
        ans++;
        if(sum>=least){
            break;
        }
    }
    cout<<ans<<endl;
}
