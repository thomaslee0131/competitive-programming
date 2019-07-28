#include<iostream>
using namespace std;
int _abs(int a){
    return a>0?a:-a;
}
int main(){
    int n;
    cin>>n;
    int ties=1,prea=0,preb=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(prea>preb){
            if(b>=prea){
                ties+=1+min(a-prea,b-prea);
            }
        }
        if(prea<preb){
            if(a>=preb){
                ties+=1+min(b-preb,a-preb);
            }
        }
        if(prea==preb){
            ties+=min(a-prea,b-preb);
        }
        prea=a;
        preb=b;
    }
    cout<<ties<<endl;
}
