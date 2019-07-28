#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>a;
vector<int>b;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    long long suma=0,sumb=0;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    long long ap=0,bp=0;
    a.push_back(0);
    b.push_back(0);
    while(ap<n||bp<n){
        if(a[ap]>b[bp]){
            suma+=a[ap];
            ap++;
        }
        else{
            bp++;
        }
        if(b[bp]>a[ap]){
            sumb+=b[bp];
            bp++;
        }
        else{
            ap++;
        }
    }
    cout<<suma-sumb<<endl;
}
