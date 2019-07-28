#include <iostream>
using namespace std;
int main(){
    long long d,k,t,m;
    double cu,enf,f,rem,ans;
    cin>>k>>d>>t;
    enf=t*2;
    if(k>d){
        if(k%d==0){
            cout<<t<<endl;
            return 0;
        }
        else {
            cu=(k/d+1)*d;
            f=k*2+cu-k;    
        }
    }
    else{
        cu=d;
        f=2*k+(cu-k);
    }
    m=enf/f;
    rem=enf-f*m;
    if(rem<=2*k){
        ans=cu*m+rem/2;
    }
    else{
        ans=cu*m+k+rem-2*k;
    }
    cout<<fixed<<ans<<endl;

}
