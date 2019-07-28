#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a<=25){
            ans++;
        }
    }
    if(ans>5){
        ans=5;
    }
    cout<<ans<<endl;
}
