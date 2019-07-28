#include<iostream>
using namespace std;
long long dorm[200010];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        dorm[i]=dorm[i-1]+a;
    }
    for(int i=0;i<m;i++){
        int b=1,c;
        cin>>c;
        while(1){
            if(c<=dorm[b]){
                cout<<b<<' '<<c-dorm[b-1]<<endl;
                break;
            }
            b++;
        }
    }
}
