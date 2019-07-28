#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t>>x>>y;
    int big=0,small=0,sec=0;
    while(sec<t){
        if(sec==0){
            small++;
            sec++;
            continue;
        }
        if(sec%x==0){
            //cout<<sec<<endl;
            sec+=y;
            big++;
        }
        else{
            //cout<<sec<<endl;
            sec++;
            small++;
        }
        if(sec>t)big--;
    }
    cout<<small<<' '<<big<<endl;
}
