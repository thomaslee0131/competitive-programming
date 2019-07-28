#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[3];
    bool one=0;
    int two=0,three=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        if(arr[i]==2)two++;
        if(arr[i]==3)three++;
        if(arr[i]==1)one=1;
    }
    if(one==1){cout<<"YES"<<endl;return 0;}
    if(two>=2){cout<<"YES"<<endl;return 0;}
    if(three==3){cout<<"YES"<<endl;return 0;}
    sort(arr,arr+3);
    if(arr[0]==2&&arr[1]==4&&arr[2]==4){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
}
