#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=0;I<t;I++){
        int n;
        cin>>n;
        int l=0,r=n,mid=(l+n)/2;
        while(l+1<r){
            cout<<"READ "<<mid<<endl;
            string inp;
            cin>>inp;
            if(inp=="true"){
                l=mid;
                mid=(l+r)/2;
            }
            else{
                r=mid;
                mid=(l+r)/2;
            }
        }
        cout<<"OUTPUT "<<mid<<endl;
    }
}
