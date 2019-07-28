#include<iostream>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        int ans=0;
        if((x+y)%2==0){
            if(n%2==0){
                ans+=(x-1)*n/2+(y/2);
                if(x%2==1)ans++;
            }
            else{
                if(x%2==0){
                    ans+=n*(x-2)/2+3+(y/2);
                }
                else{
                    ans+=n*(x-1)/2+y/2+1;
                }
            }
        }
        else{
            if(n%2==0){
                ans+=n*n/2+(x-1)*n/2+(y/2);
                if(x%2==0)ans++;
            }
            else{
                if(x%2==0){
                    ans+=n*n/2+1+n*(x-2)/2+2+(y/2)+1;
                }
                else{
                    ans+=n*n/2+1+n*(x-1)/2+y/2;
                }
            }
        }
        cout<<ans<<endl;
    }
}
