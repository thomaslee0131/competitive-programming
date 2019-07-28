#include<iostream>
using namespace std;
string s[105];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }int cnt=1;
    while(cnt){
        cnt=0;
        for(int i=0;i<n-1;i++){
            if(s[i].length()>s[i+1].length()){
                string tem=s[i];
                s[i]=s[i+1];
                s[i+1]=tem;
                cnt++;
            }
        }
    }
    for(int i=0;i<n-1;i++){
       if(s[i+1].find(s[i])== string::npos){
            cout<<"NO"<<endl;
            return 0;
       }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
}
