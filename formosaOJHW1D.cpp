#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;

vector<ll> arr;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        arr.push_back(a);
    }
    int l=0, r=0;
    
}
