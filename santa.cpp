#include<iostream>
#include<vector>
using namespace std;
int route[9];
bool passed[6][6];
vector<int> chart[6];
void solve(int n,int lines){
    route[lines]=n;
    if(lines==8&&n==2){
        for(int i=0;i<9;i++){
            cout<<route[i];
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<(int)chart[n].size();i++){
        if(passed[n][chart[n][i]]==0){
            passed[n][chart[n][i]]=1;
            passed[chart[n][i]][n]=1;
            solve(chart[n][i],lines+1);
            passed[n][chart[n][i]]=0;
            passed[chart[n][i]][n]=0;
        }
    }
}
int main(){
    chart[1].push_back(2);
    chart[1].push_back(3);
    chart[1].push_back(5);
    chart[2].push_back(1);
    chart[2].push_back(3);
    chart[2].push_back(5);
    chart[3].push_back(1);
    chart[3].push_back(2);
    chart[3].push_back(4);
    chart[3].push_back(5);
    chart[4].push_back(3);
    chart[4].push_back(5);
    chart[5].push_back(1);
    chart[5].push_back(2);
    chart[5].push_back(3);
    chart[5].push_back(4);
    solve(1,0);
}
