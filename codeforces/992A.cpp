#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000066];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=n;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]  ||  arr[i]==0){
            ans--;
        }
    }
    cout<<ans<<endl;
}
