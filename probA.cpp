#include<iostream>
using namespace std;
int t [200010];
int main(){
    int n,one=0,two=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(t[i]==1)one++;
        else two++;
    }
    if(one>two)cout<<two+(one-two)/3<<endl;
    if(one<=two)cout<<one<<endl;

}

