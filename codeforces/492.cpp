#include<iostream>
#include<cstdint>
using namespace std;
int main(){
    int64_t n;
    cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else cout<<(n/2)-n<<endl;
}
