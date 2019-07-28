#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>c;
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(c[a]!=1  &&  a!=0){c[a]=1;cnt++;}
    }
    cout<<cnt<<endl;
}
