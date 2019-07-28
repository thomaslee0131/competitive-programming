#include<iostream>
using namespace std;
int arr[1010];
int main(){
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]<arr[i-1]  &&  arr[i]<arr[i+1])c++;
        if(arr[i]>arr[i-1]  &&  arr[i]>arr[i+1])c++;
    }
    cout<<c<<endl;
}
