#include<iostream>
using namespace std;
int arr[21];
int ans,n,k;
bool dfs(int i,int sum){
    if(i==n)return sum==k ;
    if(dfs(i+1,sum))return true;
    if(dfs(i+1,sum+arr[i]))return true;
    return false; 
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    if(dfs(0,0))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
