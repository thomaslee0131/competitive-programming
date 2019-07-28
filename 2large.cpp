#include<iostream>
#include<algorithm>
using namespace std;
int sin[50000];
int dou[50000];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int d;
        cin>>d;
        for(int J=1;J<=d;J++){
            if(J%2==1){
                cin>>sin[J/2];
            }
            else cin>>dou[J/2-1];
        }
        if(d%2==0){
            sort(sin,sin+d/2);
            sort(dou,dou+d/2);
        }
        else {
            sort(sin,sin+(d/2+1));
            sort(dou,dou+d/2);
        }
        bool a=true;
        for(int i=0;i<=d/2-1;i++){
            if(sin[i]>dou[i]){
                cout<<"Case #"<<I<<": "<<i*2<<endl;
                a=false;
                break;
            }
            if(d%2==0 && i==d/2-1){
                continue;
            }
            else if(dou[i]>sin[i+1]){
                cout<<"Case #"<<I<<": "<<i*2+1<<endl;
                a=false;
                break;
            }
        }
        if(a==true){
            cout<<"Case #"<<I<<": OK"<<endl;
        }
    }
}
