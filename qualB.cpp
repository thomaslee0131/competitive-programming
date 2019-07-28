#include<iostream>
using namespace std;
int arr[110];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n;
        cin>>n;
        for(int J=0;J<n;J++){
            cin>>arr[J];
        }
        bool b=false;
        for(int i=1;i<=100;i++){
            for(int j=0;j<n-2;j++){
                if(arr[j]>arr[j+2]){
                    int tem=arr[j];
                    arr[j]=arr[j+2];
                    arr[j+2]=tem;
                }
            }
            bool a=true;
            for(int j=1;j<n;j++){
                if(arr[j]<arr[j-1]){
                    a=false;
                    break;
                }
            }
            if(a==true){
                cout<<"Case #"<<I<<": OK"<<endl;
                b=true;
                break;
            }
        }
        if(b==false){
            for(int i=0;i<n;i++){
                if(arr[i]>arr[i+1]){
                    cout<<"Case #"<<I<<": "<<i<<endl;
                    break;
                }
            }
        }
    }
}
