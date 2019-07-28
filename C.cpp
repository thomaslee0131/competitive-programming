#include<iostream>
#include<algorithm>
int a[1000100],b[1000100];
using namespace std;
int main(){
    int n,m,c=0;
    long long w=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(int i=n-1;i>=0;i--){

        w+=a[i]*b[c];
        c++;
    }
    cout<<w<<endl;
}
