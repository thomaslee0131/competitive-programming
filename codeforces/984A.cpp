#include<iostream>
#include<algorithm>
int a[1010];
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==1){
        cout<<a[n/2]<<endl;
    }
    else{
        cout<<a[n/2-1]<<endl;
    }
}
