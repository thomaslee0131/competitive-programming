#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int n,ans=0;
    int d[3];
    cin>>n;
    cin>>d[0]>>d[1]>>d[2];
    sort(d,d+3);
    for(int i=1;i<n;i++){
        ans+=d[0];
    }
    cout<<ans<<endl;

    
}
