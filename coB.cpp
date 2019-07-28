#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,rm=0;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            x++;
        }
        else x=0;
        if(x>2&&s[i]=='x'){
            rm++;
        }
    }
    cout<<rm<<endl;
}
