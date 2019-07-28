#include<iostream>
using namespace std;
string card[13];
int has[13];
int main(){
    for(int i=0;i<13;i++){
        cin>>card[i];
        if(card[i]=="1m"){
            has[0]++;
        }
        if(card[i]=="9m"){
            has[1]++;
        }
        if(card[i]=="1p"){
            has[2]++;
        }
        if(card[i]=="9p"){
            has[3]++;
        }
        if(card[i]=="1s"){
            has[4]++;
        }
        if(card[i]=="9s"){
            has[5]++;
        }
        if(card[i]=="1z"){
            has[6]++;
        }
        if(card[i]=="2z"){
            has[7]++;
        }
        if(card[i]=="3z"){
            has[8]++;
        }
        if(card[i]=="4z"){
            has[9]++;
        }
        if(card[i]=="5z"){
            has[10]++;
        }
        if(card[i]=="6z"){
            has[11]++;
        }
        if(card[i]=="7z"){
            has[12]++;
        }
    }
    int one=0,two=0;
    for(int i=0;i<13;i++){
        if(has[i]==1){
            one++;
        }
        if(has[i]==2){
            two++;
        }
    }
    if(one==13){
        cout<<13<<endl;
        return 0;
    }
    if(one==11&&two==1){
        cout<<1<<endl;
        return 0;
    }
    cout<<0<<endl;
}

