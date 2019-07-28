#include<iostream>
#include<vector>
using namespace std;
int num[102];
int cnt[102];
char yes[100];
vector<int>pos[102];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        cnt[num[i]]++;
        pos[num[i]].push_back(i);
    }
    int one=0,two=0,other=0;
    for(int i=1;i<=100;i++){
        if(cnt[i]==1){
            one++;
        }
        else if(cnt[i]==2){
            two++;
        }
        if(cnt[i]>2)other++;
    }
    if(one%2==1&&other==0){
        cout<<"NO\n";
        return 0;
    }
    bool d=0;
    if(one%2==1){
        d=1;
    }
    bool A=1;
    cout<<"YES"<<endl;
    for(int i=1;i<=100;i++){
        if(cnt[i]==1){
            if(A){
                yes[pos[i][0]]='A';
                A=0;
            }
            else {
                A=1;
                yes[pos[i][0]]='B';
            }
        }
        else if(cnt[i]==2){
            yes[pos[i][0]]='A';
            yes[pos[i][1]]='B';
        }
        if(cnt[i]>2){
            if(d){
                yes[pos[i][0]]='B';
                for(int j=1;j<(int)pos[i].size();j++){
                    yes[pos[i][j]]='A';
                }
                d=0;
            }
            else{
                for(int j=0;j<(int)pos[i].size();j++){
                    yes[pos[i][j]]='A';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<yes[i];
    }
    cout<<endl;
}
