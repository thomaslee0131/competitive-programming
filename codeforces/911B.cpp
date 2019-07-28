#include<iostream>
using namespace std;
int main(){
    int n,a,b,maxn=0;
    cin>>n>>a>>b;
    for(int i=1;i<n;i++){
        if(a/i==0  ||  b/(n-i)==0)continue;
        int least=min(a/i,b/(n-i));
        maxn=max(maxn,least);
    }
    cout<<maxn<<endl;
}
