#include<iostream>
using namespace std;
int arr[110];
int main(){
    int n,t,c=0,cnt=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        c=c+86400-arr[i];
        cnt++;
        if(c>=t)break;
    }
    cout<<cnt<<endl;
}
