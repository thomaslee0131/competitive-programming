#include<iostream>
char tem[101];
char s[101];
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int a=n;
    while(n>1){
        for(int i=n-1;i>=0;i--){
            tem[n-1-i]=s[i];      
        }
        for(int i=0;i<n;i++){
            s[i]=tem[i];
        }
        n=n/2;
    }
    for(int i=0;i<a;i++){
        cout<<s[i];
    }
    cout<<endl;
}
