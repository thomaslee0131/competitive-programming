#include<iostream>
#include<algorithm>
using namespace std;
int building[110];
int _abs(int a){
    return a>=0?a:-a;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>building[i];
    }
    int ans=1e9+10;
    for(int x=0;x<n;x++){
        int sum=0;
        for(int i=0;i<n;i++){
            int xidis=abs(x-i);
            sum+=building[i]*(xidis+i+x+x+i+xidis);
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}
