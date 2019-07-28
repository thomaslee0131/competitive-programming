#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    string s;
    cin>>n>>x>>y>>s;
    int ans=0;
    for(int i=n-1;i>=n-x;i--){
        if(i==n-y-1){
            if(s[i]=='0')ans++;
        }
        else if(s[i]=='1')ans++;
    }
    cout<<ans<<endl;
}
