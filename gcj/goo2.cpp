#include<iostream>
#include<cmath>
using namespace std;
bool check (int x){
    int pre=10;
    while(x){ 
        int now=x%10;
        x=x/10;
        if(now<=pre){
            pre=now;
        }
        else return false;
    }
    return true;
}
int main(){
    int t,n;
    cin>>t;
    for(int I=1;I<=t;I++){
        cin>>n;
        for(int i=n;i>=1;i--){
            if(check(i)==true){
                cout<<"Case #"<<I<<": "<<i<<endl;
                break;
            }
        }
    }
}
