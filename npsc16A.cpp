#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int a=1;a<7;a++){
        if(n==1){
            if(a==m){
                ans++;
            }
        }
        for(int b=1;b<7;b++){
            if(n==2){
                if(a+b==m){
                    ans++;
                }
            } 
            for(int c=1;c<7;c++){
                if(n==3){
                    if(a+b+c==m){
                        ans++;
                    }
                }
                for(int d=1;d<7;d++){
                    if(n==4){
                        if(a+b+c+d==m){
                            ans++;
                        }
                    } 
                    for(int e=1;e<7;e++){
                        if(n==5){
                            if(a+b+c+d+e==m){
                                ans++;
                            }
                        }
                        for(int f=1;f<7;f++){
                            if(n==6){
                                if(a+b+c+d+e+f==m){
                                    ans++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
