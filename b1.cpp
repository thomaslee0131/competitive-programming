#include<iostream>
using namespace std;
int c[100010];
int main(){
    int t;
    for(int I=1;I<=t;I++){
        int n,l;
        cin>>n>>l;
        int remain=n;
        for(int i=0;i<l;i++){
            cin>>c[i];
            remain=remain-c[i];
        }
        for(int i=0;i<l;i++){
            if(remain=0){
                break;
            }
            double a=(100/n)*c[i],c=(100/n)*(c[i]+1);
            int b=(int)a,d=(int)c;
            if(a-b<0.5){
                if(c-d>0.5){
                    c[i]++;
                    remain--;
                }
            }
        }
        if(remain>0){
            for(int i=0;i<l;i++){
                if(remain=0){
                    break;
                }
                double a=(100/n)*c[i],c=(100/n)*(c[i]+1);
                int b=(int)a,d=(int)c;
                if(a-b<0.5&&c-d<0.5){
                    remain--;
                    c[i]++;
                }
            }
        }

    }
}
