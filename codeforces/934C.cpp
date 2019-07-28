#include<iostream>
#include<algorithm>
using namespace std;
int arr[2010];
int main(){
    int n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0,maxl=0;
    for(int i=0;i<n;i++){
        cnt++;
        if(arr[i]>arr[i+1]){
            for(int j=i+1;j<n;j++){
                if(arr[j]>=arr[j+1]){
                    cnt++;
                }
                else{
                    maxl=max(maxl,cnt);
                    cnt=0;
                }
            }
        }
    }
}
