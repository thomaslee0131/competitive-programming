#include<iostream>
#include<vector>
using namespace std;
vector <int> arr;
vector <int> arra;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n-2;i++){
        if(arr[i]<=arr[i+1]){
            arr[1+i]=arr[i]-arr[i+1];
        }
        else{
            arr[i+1]-=arr[i];
        }
    }
    arr[n-1]-=arr[n-2];
    cout<<arr[n-1]<<endl;
}
