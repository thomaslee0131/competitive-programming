#include<iostream>
using namespace std;
int x[110];
int main(){
    int n;
    cin>>n;
    bool a=false;
    for(int i=0;i<n;i++){
        a=false;
        cin>>x[i];
        for(int j=0;j<14;j++){
            if((x[i]-7*j)%3==0){
                if(x[i]-7*j<0){
                    break;    
                }
                cout<<"YES"<<endl;
                a=true;
                break;
            }
        }
        if(a==false)cout<<"NO"<<endl;
    }
}
