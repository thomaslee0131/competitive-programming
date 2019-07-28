#include<iostream>
using namespace std;
int arr[1010];
int s[1010];
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            cnt++;
            if(i!=0){
                s[cnt-1]=arr[i-1];
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<cnt;i++){
        cout<<s[i]<<' ';
        //if(i==cnt-1&&i==1){cout<<' '<<arr[n-1];break;};
    }
    cout<<arr[n-1]<<endl;
}
