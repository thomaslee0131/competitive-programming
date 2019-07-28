#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
string pr[260];
int len[260];
bool el[260];
vector<char>ans;


void reset(){
    for(int i=0;i<260;i++){
        len[i]=0;
        el[i]=0;
        pr[i]="";
    }
    ans.clear();
}

int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        reset();
        int a;
        cin>>a;
        for(int i=0;i<a;i++){
            cin>>pr[i];
            //cout<<pr[0][0]<<endl;
            len[i]=pr[i].length();
        }
        cout<<"Case #"<<I<<": ";
        int eled=0;
        bool finished=0;
        for(int i=0;i<500;i++){
            if(eled==a)break;
            int r=0,p=0,s=0;
            vector<int>rs;
            vector<int>ps;
            vector<int>ss;
            for(int j=0;j<a;j++){
                if(el[j])continue;
                int di=i%len[j];
                if(pr[j][di]=='R'){r++;rs.push_back(j);}
                if(pr[j][di]=='P'){p++;ps.push_back(j);}
                if(pr[j][di]=='S'){s++;ss.push_back(j);}
            }
            //cout<<r<<' '<<p<<' '<<s<<endl;
            if(r && p && s){
                cout<<"IMPOSSIBLE"<<endl;
                finished=1;
                break;
            }
            if(!r&&!p){
                ans.push_back('R');
                eled=a;
                break;
            }
            if(!r&&!s){
                eled=a;
                ans.push_back('S');
                break;
            }
            if(!s&&!p){
                eled=a;
                ans.push_back('P');
                break;
            }
            if(r && p){
                ans.push_back('P');
                for(int ind : rs){
                    el[ind]=1;
                    eled++;
                }
            }
            if(r && s){
                ans.push_back('R');
                for(int ind : ss){
                    el[ind]=1;
                    eled++;
                }
            }
            if(p && s){
                ans.push_back('S');
                for(int ind : ps){
                    el[ind]=1;
                    eled++;
                }
            }
        }
        if(finished)continue;
        if(eled!=a){
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        for(int i=0;i<(int)ans.size();i++){
            cout<<ans[i];
            if(i==(int)ans.size()-1)cout<<endl;
        }
    }
}
