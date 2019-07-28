#include<iostream>
using namespace std;
long long num[200010];
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(long long i=0;i<n;i++){
        cin>>num[i];
        sum+=num[i];
    }
    long long suma=0,pointa=0;
    for(long long i=0;i<n;i++){
        if(suma>=sum/2){
            break;
        }
        suma+=num[i];
        pointa=i;
    }
    long long sumc=sum-suma,pointc=pointa+1;
    while(suma!=sumc){
        if(suma>sumc){
            suma-=num[pointa];
            pointa--;
        }
        else{
            sumc-=num[pointc];
            pointc++;
        }
    }
    cout<<suma<<endl;
}
