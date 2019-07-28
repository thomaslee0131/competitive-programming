#include<iostream>
using namespace std;
int main(){
    int n,m,x,y,num=0;
    cin>>n>>m;
    bool first=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='B'){
                num++;
                if(first){
                    x=i;
                    y=j;
                    first=0;
                }   
            }
        }
    }
    int si;
    for(int i=1;i*i<=num;i++){
        si=i;
    }
    cout<<x+si/2+1<<' '<<y+si/2+1<<endl;
}
