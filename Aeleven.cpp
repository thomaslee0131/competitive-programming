#include<iostream>
using namespace std;
int fi[1000];
int main(){
    int n,fi1=0,fi2=1,tem=0;
    cin>>n;
    bool chk=false;
    for(int i=1;i<=n;i++){
        tem=fi1+fi2;
        fi1=fi2;
        fi2=tem;
        fi[i]=fi2;
    }
    for(int i=1;i<=n;i++){
        chk=false;
        for(int j=n;j>=1;j--){
            if(i==fi[j]){
                chk=true;
            }
        }
        if(chk==true)cout<<"O";
        else cout<<"o";
    }
    cout<<endl;
}
