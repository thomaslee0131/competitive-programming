#include<iostream>
using namespace std;
int num[1010];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]%2==0){
            num[i]--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i];
        if(i==n-1){
            cout<<endl;
        }
        else cout<<' ';
    }
}
