#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        ans=max(ans,x+y);
    }
    cout<<ans<<endl;
}
