#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;    
        }
        else b++;
    }
    if(b==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<1;
    for(int i=0;i<c;i++){
        cout<<0;
    }
    cout<<endl;
}
