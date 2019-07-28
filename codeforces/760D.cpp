#include<iostream>
int t[100010];
int ans[100010];

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    ans[0]=20;
    for(int i = 1; i < n ; i ++){
        ans[i]=ans[i-1]+20;
        //90
        int *k=lower_bound(t,t+n,t[i]-89);
        if(k==t){
            ans[i]=min(ans[i],50);
        }
        else{
            k--;
            ans[i]=min(ans[i],ans[k-t]+50);
        }
        //1440
        k=lower_bound(t,t+n,t[i]-1439);
        if(k==t){
            ans[i]=min(ans[i],120);
        }
        else{
            k--;
            ans[i]=min(ans[i],ans[k-t]+120);
        }
    }
    cout<<ans[0]<<endl;
    for(int i=1;i<n;i++){
        cout<<ans[i]-ans[i-1]<<endl;
    }
    
}
