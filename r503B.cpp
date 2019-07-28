#include<iostream>
#include<vector>
#include<map>
using namespace std;
int times[1001];
map<int,int> rep;
int a(int i){
    times[i]++;
    if(times[i]==2)return i;
    return a(rep[i]);
}
void clear(){
    for(int i=0;i<1001;i++){
        times[i]=0;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        rep[i]=a;
    }
    for(int i=1;i<=n;i++){
        clear();
        cout<<a(i);
        if(i==n)cout<<endl;
        else cout<<' ';
    }
}
