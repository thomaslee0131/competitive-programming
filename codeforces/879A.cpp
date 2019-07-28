#include<iostream>
using namespace std;
int d[1010];
int s[1010];
int answer[1010];
int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>d[i];
    }
    answer[0]=s[0];
    if(n==1){
        cout<<s[0]<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        ans=0;
        ans=ans+s[i];
        while(ans<=answer[i-1]){
            ans+=d[i];
        }
        answer[i]=ans;
    }
    cout<<ans<<endl;
}
