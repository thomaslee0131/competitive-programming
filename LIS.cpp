#include<iostream>
#include<algorithm>
#include<vector>
#include<cassert>
using namespace std;

vector<int> seq;
int len[100];
int pre[100];
int n;

void trace(int pos){
    if(pre[pos] != -1){
        trace(pre[pos]);
    }
    cout<<seq[pos]<<' ';
    return;
}

void LIS_n_square(){
    if(n == 0){
        cout<<"LIS: "<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++) len[i] = 1;
    for(int i=0;i<n;i++) pre[i] = -1;

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(seq[i]>seq[j]){
                if(len[i] < len[j]+1){
                    pre[i] = j;
                    len[i] = len[j] + 1;
                }
            }
        }
    }
    int pos = 0, lis = 0;
    for(int i=0;i<n;i++){
        if(lis < len[i]){
            lis = len[i];
            pos = i;
        }
    }
    cout<<"LIS: "<<lis<<endl;
    trace(pos);
    cout<<endl;
}

void LIS_nlogn(){
    if(n == 0){
        cout<<"LIS: "<<0<<endl;
        return;
    }

    vector<int> v;
    v.push_back(seq[0]);

    for(int i=1;i<n;i++){
        int x = seq[i];
        if(x>v.back()){
            v.push_back(x);
        }
        else{
            int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
            v[idx] = x;
        }
    }
    cout<<"LIS: "<<v.size()<<endl;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        seq.push_back(x);
    }
    LIS_n_square();
    LIS_nlogn();
}
