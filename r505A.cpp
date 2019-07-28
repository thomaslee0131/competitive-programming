#include<iostream>
using namespace std;
bool seen[26];
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){cout<<"Yes"<<endl;return 0;}
    for(int i=0;i<n;i++){
        if(seen[s[i]-'a']){
            cout<<"Yes"<<endl;
            return 0;
        }
        seen[s[i]-'a']=1;
    }        
    cout<<"No"<<endl;
}
