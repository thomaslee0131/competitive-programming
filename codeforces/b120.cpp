#include<iostream>
#include<map>
using namespace std;
map<int,int>_f;
map<int,bool> hasf;
int g(int x){
    return x<=2?(x*x-1):2;
}

int h(int x){
    return x<2?-1:(2+h(x-1)-h(x-2));
}

int f(int x){
    if(hasf[x])return _f[x];
    hasf[x]=1;
    if(x>h(x))return _f[x]=f(x-1)-h(x);
    if(x<h(x))return _f[x]=f(g(x))-g(x);
    return _f[x]=1;
}

int main(){
    while(1){
        int n; cin>>n;
        cout<<f(n)<<endl;
    }
}
