#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool com(int a,int b){
    return a<b;
}
int main(){
    vector<int>a;
    for(int i=10;i>0;i--){
        a.push_back(i);
    }
    sort(a.begin(),a.end(),com);
    a.resize(5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}
