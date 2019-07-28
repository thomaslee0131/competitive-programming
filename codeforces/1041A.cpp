#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001];
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        ans+=(arr[i+1]-arr[i]-1);
    }
    cout<<ans<<endl;
}
