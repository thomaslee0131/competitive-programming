#include<iostream>
#include <math.h>
using namespace std;

long long T(long long n){
    return n*(long long)sqrt(n)*(long long)log2(n);
}

int main(){
    int t; cin>>t;
    while(t--){
        long long k; cin>>k;
        long long l = 0, r = 100000000000, mid;
        while(l<r){
            mid = (l+r)/2;
            long long tn = T(mid);
            if(tn <= k*1000000000){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        cout<<l-1<<endl;
    }
}
