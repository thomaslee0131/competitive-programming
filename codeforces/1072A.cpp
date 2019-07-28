#include<iostream>
using namespace std;
int main(){
    int w,h,k;
    cin>>w>>h>>k;
    int c=0;
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=(w-c)*2+(h-c)*2-4;
        c+=4;
    }
    cout<<ans<<endl;
}
