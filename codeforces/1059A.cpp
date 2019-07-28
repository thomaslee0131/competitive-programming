#include<iostream>
using namespace std;
int main(){
    int n,len,a,passed=0;
    cin>>n>>len>>a;
    int ans=0;
    for(int i=0;i<n;i++){
        int t,l;
        cin>>t>>l;
        if(passed+a<=t){
            while(passed+a<=t){
                passed+=a;
                ans++;
            }
        }
        passed=t;
        passed+=l;
    }
    while(passed+a<=len){
        passed+=a;
        ans++;
    }
    cout<<ans<<endl;
}
