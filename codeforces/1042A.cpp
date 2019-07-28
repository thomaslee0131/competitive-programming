#include<iostream>
#include<algorithm>
using namespace std;
int p[101];
int main(){
    int n,m,total=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>p[i];
        total+=p[i];
    }
    total+=m;
    sort(p,p+n);
    int maximum=p[n-1]+m;
    int minimum=0;
    /*while(m){
        int nextp=p[pointer+1];
        if(pointer==n-1){
            p[pointer]++;
            m--;
            pointer=0;
            continue;
        }
        if(p[pointer]<=nextp){
            m--;
            p[pointer]++;
        }
        if(p[pointer]>nextp){
            pointer++;
        }
    }
    for(int i=0;i<n;i++){
        minimum=max(minimum,p[i]);
    }*/
    if(total/n>p[n-1]){
        minimum=total/n;
        if(total%n!=0){
            minimum++;
        }
    }
    else{
        minimum=p[n-1];
        if(total%n!=0&&total/n==p[n-1]){
            minimum++;
        }
    }
    
    cout<<minimum<<' '<<maximum<<endl;
}
