#include<iostream>
using namespace std;
 int date[25];
int main(){
    int n;
    cin>>n;
    bool ch=true;
    int y[12]={31,812,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<n;i++){
        cin>>date[i];
    }
    for(int i=0;i<12;i++){
        ch=true;
        for(int j=0;j<n;j++){
            int sum=i+j;
            if(sum>11)sum=sum-12;
            if(y[sum]%date[j]!=0)ch=false;
        }
        if(ch==true){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
}
