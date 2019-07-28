#include<iostream>
using namespace std;
bool used[10];
bool ok(int mo,int ch){
    for(int i=1;i<=5;i++){
        int dm=mo%10,dc=ch%10;
        mo/=10;
        ch/=10;
        if(used[dm])return 0;
        used[dm]=1;
        if(used[dc])return 0;
        used[dc]=1;
    }
    return true;
}
int main(){
    int n;
    bool first=1;
    while(cin>>n){
        if(!n){
            return 0;
        }
        if(!first){
            cout<<endl;
        }
        else first=0;
        int mo=1,ch=n;
        bool printed=0;
        while(ch<=98765){
            for(int i=0;i<10;i++){
                used[i]=0;
            }   
            if(ok(mo,ch)){
                printf("%05d",ch);
                cout<<" / ";
                printf("%05d",mo);
                cout<<" = "<<n<<endl;
                printed=1;
            }
            ch+=n;
            mo++;
        }
        if(!printed){
            cout<<"There are no solutions for "<<n<<'.'<<endl;
        }
    }
}
