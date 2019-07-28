#include<iostream>
#include<cassert>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;


int main(){
    int t,f;
    cin>>t>>f;
    for(int I=1;I<=t;I++){
        vector<char>ans;
        bool a=0,b=0,c=0,d=0,e=0;
        for(int i=1;i<5;i++){
            map<char,int>cnt;
            for(int j=i;j<596;j+=5){
                if(j==594)break;
                cout<<j<<endl;
                char ch;
                cin>>ch;
                cnt[ch]++;
            }
            if(i!=4){
                if(cnt['A']!=24){
                    ans.push_back('A');
                    a=1;
                }
                if(cnt['B']!=24){
                    b=1;
                    ans.push_back('B');
                }
                if(cnt['C']!=24){
                    c=1;
                    ans.push_back('C');
                }
                if(cnt['D']!=24){
                    d=1;
                    ans.push_back('D');
                }
                if(cnt['E']!=24){
                    e=1;
                    ans.push_back('E');
                }
            }
            else{
                if(cnt['A']!=24){
                    if(!a){
                        ans.push_back('A');
                        a=1;
                    }
                }
                if(cnt['B']!=24){
                    if(!b){
                        b=1;
                        ans.push_back('B');
                    }
                }
                if(cnt['C']!=24){
                    if(!c){
                        c=1;
                        ans.push_back('C');
                    }
                }
                if(cnt['D']!=24){
                    if(!d){
                        d=1;
                        ans.push_back('D');
                    }
                }
                if(cnt['E']!=24){
                    if(!e){
                        e=1;
                        ans.push_back('E');
                    }
                }
            }
        }
        if(!a)ans.push_back('A');
        if(!b)ans.push_back('B');
        if(!c)ans.push_back('C');
        if(!d)ans.push_back('D');
        if(!e)ans.push_back('E');
        for(int i=0;i<5;i++){
            cout<<ans[i];
        }
        cout<<endl;
        char j;
        cin>>j;
        assert(j=='Y');
        continue;
    }
}

