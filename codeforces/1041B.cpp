#include<iostream>
#include<algorithm>
using namespace std;
long long gcda(long long a,long long b){
    if(a%b==0||b%a==0){
        return min(a,b);
    }
    if(a>b)return gcda(a%b,b);
    else return gcda(a,b%a);
}
int main(){
    long long a,x,b,y;
    cin>>a>>b>>x>>y;
    long long gc=gcda(x,y);
    if(gc){
        x/=gc;
        y/=gc;
    }
    //cout<<"gc="<<gc<<endl;
    //cout<<x<<' '<<y<<endl;
    long long ans=min(a/x,b/y);
    cout<<ans<<endl;
}
