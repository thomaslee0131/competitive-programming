#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int di=0,lo=0,up=0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]<='9'){
                di++;
            }
            else if(s[i]<='z'&&s[i]>='a'){
                lo++;
            }
            else up++;
        }
        if(di==0&&lo&&up){
            for(int i=0;i<(int)s.size();i++){
                if(s[i]<='z'&&s[i]>='a'&&lo>1){
                    s[i]='1';
                    break;
                }
                if(s[i]<='Z'&&s[i]>='A'&&up>1){
                    s[i]='1';
                    break;
                }
            }
            cout<<s<<endl;
            continue;
        }
        if(di==0&&lo==0&&up){
            s[0]='1';
            s[1]='a';
            cout<<s<<endl;
            continue;
        }
        if(di&&lo==0&&up){
            for(int i=0;i<(int)s.size();i++){
                if(s[i]<='9'&&di>1){
                    s[i]='a';
                    break;
                }
                if(s[i]<='Z'&&s[i]>='A'&&up>1){
                    s[i]='a';
                    break;
                }
            }
            cout<<s<<endl;
            continue;
        }
        if(di&&lo==0&&up==0){
            s[0]='A';
            s[1]='a';
            cout<<s<<endl;
            continue;
        }
        if(di&&lo&&up==0){
            for(int i=0;i<(int)s.size();i++){
                if(s[i]<='9'&&di>1){
                    s[i]='A';
                    break;
                }
                if(s[i]<='z'&&s[i]>='a'&&lo>1){
                    s[i]='A';
                    break;
                }
            }
            cout<<s<<endl;
            continue;
        }
        if(di==0&&lo&&up==0){
            s[0]='A';
            s[1]='1';
            cout<<s<<endl;
            continue;
        }
        else cout<<s<<endl;
    }
}
