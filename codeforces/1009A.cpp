#include<iostream>
using namespace std;
int game[1000];
int wallet[1000];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>game[i];
    }
    for(int i=0;i<m;i++){
        cin>>wallet[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(game[i]<=wallet[j]){
            j++;
        }
    }
    cout<<j<<endl;
}
