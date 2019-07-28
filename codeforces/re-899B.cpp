#include<iostream>
using namespace std;
int mnth[]={31,28,31,30,31,30,31,31,30,31,30,31};
int a[25];
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<12; i++){
        bool ok=1, y=0;
        for(int j=0; j<n; j++){
            int p=(i+j)%12;
            if(mnth[p]==28){
                if(a[j]!=28  &&  a[j]!=29){ok=0; break;}
            }
            else if(a[j]!=mnth[p]){ok=0; break;}
            if(a[j]==29  &&  y) {cout<<"No"<<endl; return 0;}
            if(a[j]==29) y=1;
        }
        if(ok){cout<<"Yes"<<endl; return 0;}
    }
    cout<<"No"<<endl;
}
