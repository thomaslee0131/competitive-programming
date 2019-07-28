#include<iostream>
using namespace std;
int main(){
    string s;
    int n,a=0,c=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='s')a++;
        else a--;
        if(a<0){
            c++;
        }
    }
    cout<<c<<endl;

}
