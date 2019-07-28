#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000010];
long long c[1000010];
long long n[1000010];
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i];
        if(i==0){
            c[0]=a[i];
        }
        else{
            c[i]=max(c[i-1]+a[i],a[i]);
            c[i]=max(c[i],c[i-1]);
        }
    }
    n[2]=a[0]+a[2];
    for(int i=3;i<x;i++){
        n[i]=max({c[i-2]+a[i],n[i-1]+a[i],n[i-1]});
    }
    cout<<n[x-1]<<endl;

}
