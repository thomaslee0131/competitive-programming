#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool fr=0;
    int f=0,b=0,now=0,longest=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            if(!fr){f=now;fr=1;}
            longest=max(longest,now);
            now=0;
        }
        else{
            now++;
        }
    }
    b=now;
    int ans=max(longest,b+f);
    cout<<ans<<endl;
}
