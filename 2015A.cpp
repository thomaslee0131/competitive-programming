#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    if(x==n){
        cout<<y<<endl;
        return 0;
    }
    if(y==n){
        cout<<x<<endl;
        return 0;
    }
    else cout<<n<<endl;

}

