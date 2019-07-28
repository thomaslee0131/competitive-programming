#include <iostream>
#include<algorithm>
using namespace std;
long long a[100100];
long long  b[100100];
int main(){
    long long n,cnt=0;
    cin>>n;
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
           if(i==0)cin>>a[j];
           else cin>>b[j]; 
        }
    }
    for(int i=0;i<n;i++){
        cnt+=a[i];
    }
    sort(b,b+n);
    if(cnt>b[n-1]+b[n-2])cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}
