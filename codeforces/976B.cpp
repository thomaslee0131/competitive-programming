#include<iostream>
using namespace std;
int main(){
    long long n,m,k,x,y;
    cin>>n>>m>>k;
    if(k<n){
         y=k+1;
    }
    else{
        y=n-(k-n)/(m-1);
    }
    if(k<n){
        x=1;
    }
    else {
        if((n-y)%2==0){
            x=1+(k-n+1)-(n-y)*(m-1);
        }
        else{
            x=m+1-((k-n+1)-(n-y)*(m-1));
        }
    }
    cout<<y<<" "<<x<<endl;
}
