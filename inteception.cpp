#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n;
        cin>>n;
        for(int J=0;J<n+1;J++){
            int p;
            cin>>p;
        }
        if(n%2==0){
            cout<<"Case #"<<I<<": "<<0<<endl;
        }
        else{
            cout<<"Case #"<<I<<": "<<1<<endl;
            cout<<"0.0"<<endl;
        }
    }
}
