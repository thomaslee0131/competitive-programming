#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int p[106];
int ans[106];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(i%2){
            ans[l]=p[i];
            l++;
        }
        else{
            ans[r]=p[i];
            r--;   
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
        if(i==n-1){
            cout<<endl;
        }
        else cout<<' ';
    }
}
