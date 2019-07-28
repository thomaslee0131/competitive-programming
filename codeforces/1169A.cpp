#include<iostream>
using namespace std;
int main(){
    int n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    while(true){
        a++;b--;
        if(a==n+1)a=1;
        if(b==0)b=n;
        if(a==b){cout<<"YES"<<endl;return 0;}
        if(a==x ||  b==y)break;
    }
    cout<<"NO"<<endl;
}
