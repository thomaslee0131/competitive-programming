#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    bool deleted=0;
    for(int i=0;i<n;i++){
        if(s[i]>s[i+1]&&!deleted){
            deleted=1;
            continue;
        }
        else cout<<s[i];
    }
    cout<<endl;
}
