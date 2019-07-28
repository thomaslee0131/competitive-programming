#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,ans=1,x;
    cin>>n;
    map<int,int>a,b;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]++;
        b[a[x]]++;
        if(a[x]*b[a[x]]==i&&i!=n)ans=i+1;
        else if(a[x]*b[a[x]]==i-1)ans=i;
    }
    cout<<ans<<endl;
}
