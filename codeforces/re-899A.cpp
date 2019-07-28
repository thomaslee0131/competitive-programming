#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+1;
int a[N];
int main(){
    int n; cin>>n;
    int one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else two++;
    }
    int t=min(one,two);
    cout<<t+(one-t)/3<<endl;
}
