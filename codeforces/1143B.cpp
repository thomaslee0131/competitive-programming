#include<iostream>
#include<algorithm>
using namespace std;
int f(int n){
    if(n<=9)return max(n,1);
    return max(n%10*f(n/10),9*f(n/10-1));
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}
