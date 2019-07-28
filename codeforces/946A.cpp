#include <iostream>
int a[110];
using namespace std;
int main(){
    int n,B=0,C=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<n;i++){
        if(a[i]<0)C=C+a[i];
        else B=B+a[i];
    }
    cout<<B-C<<endl;

}
