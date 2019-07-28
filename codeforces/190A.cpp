#include <iostream>
using namespace std;
int main(){
    int n,m,max,min;
    cin>>n>>m;
    if(n==0 && m!=0){
    cout<<"Impossible"<<endl;
        return 0;
    }
    if(n>m){
        if(m!=0){
            min=n;
            max=m+n-1;
        }
        else{
            max=n;
            min=n;
        }

    }
    if(n<m){
        max=n+m-1;
        min=m;
    }
    if(n==m){
        if(n!=0){
            min=n;
            max=m+n-1;
        }
        else {
            max=0;
            min=0;
        }
    }
    cout<<min<<" "<<max<<endl;
}
