#include<iostream>
#include<queue>
#include<unordered_set>
using namespace std;
long long state;
deque<int> p1;
deque<int> p2;
unordered_set<long long> t;
long long to_state(deque<int>a,deque<int>b){
    long long ret=0;
    for(int n:a){
        if(n==10)n=0;
        ret*=10;
        ret+=n;
    }
    for(int n:b){
        if(n==10)n=0;
        ret*=10;
        ret+=n;
    }
    ret*=10;
    ret+=a.size();
    return ret;
}
int main(){
    int n,n1,n2;
    cin>>n;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int v;
        cin>>v;
        p1.push_back(v);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        int v;
        cin>>v;
        p2.push_back(v);
    }
    int cnt=0;
    while(p1.size()  &&  p2.size()){
        state=to_state(p1,p2);
        if(t.count(state)){
            cout<<-1<<endl;
            return 0;
        }
        t.insert(state);
        int f1=p1[0],f2=p2[0];
        p1.pop_front();
        p2.pop_front();
        if(f1>f2){
            p1.push_back(f2);
            p1.push_back(f1);
        }
        else{ 
            p2.push_back(f1);
            p2.push_back(f2);
        }
        cnt++;
    }
    cout<<cnt<<' ';
    if(p1.size()){
        cout<<1<<endl;
    }
    else cout<<2<<endl;
}
