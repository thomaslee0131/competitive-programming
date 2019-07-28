#include<iostream>
using namespace std;
char s[110];
int main(){
    int n;
    char al[26];
    for(int i=0;i<=25;i++){
        al[i]='a'+i;
    }
    string a,b;
    cin>>a>>b>>n;
    cin>>s;
    if(a=="encrypt"){
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(s[i]==al[j])cout<<b[j];
                if(s[i]=='_'){cout<<"_";break;}
            }
        }
        cout<<endl;
    }
    if(a=="decrypt"){
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(s[i]==b[j])cout<<al[j];
                if(s[i]=='_'){cout<<"_";break;}
            }
        }
        cout<<endl;
    }   
}
