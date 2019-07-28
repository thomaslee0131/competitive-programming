#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int mi=min(s.size(),t.size()),cnt=0;
    for(int i=0;i<mi;i++){
        if(s[s.size()-i-1]!=t[t.size()-i-1]){
            break;
        }
        else cnt++;
    }
    cout<<s.size()+t.size()-2*cnt<<endl;
}
