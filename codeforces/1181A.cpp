#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long x, y, z; cin>>x>>y>>z;
    long long rx = x%z, ry = y%z;
    long long ans = 0;
    if(rx+ry>=z && rx != 0 && ry != 0){
        ans = min(z-(x%z), z-(y%z));
    }
    cout<<(x+y)/z<<' '<<ans<<endl;
}
