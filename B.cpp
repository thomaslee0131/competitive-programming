#include<iostream>
using namespace std;
string s[520];
int main(){
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    cin>>k;
    if(s[k-1]=="C"){
        if(k==n){
            for(int i=0;i<n-1;i++){
                cout<<i;
                if(i+1==k)continue;
                if(i==n-2 || i+1==k)break;
                cout<<" ";
            }
        }
        if(k==1){
            for(int i=2;i<n;i++){
                cout<<i;
                if(i==n-1)break;
                cout<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(i==k || i==k+1)continue;
                cout<<i;
                if(i==n-1)break;
                cout<<" ";
            }
        }
    }
}

