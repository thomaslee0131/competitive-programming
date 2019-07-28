#include<iostream>
#include<algorithm>
using namespace std;
int arr[30];
int main(){
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    cout<<arr[k-1]-k<<endl;
}
