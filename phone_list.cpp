#include<iostream>
using namespace std;
bool makenode,seehit=0;
struct node{
    bool hit;
    node* next[10];
    node(){
        hit=false;
        for(int i = 0 ; i < 10 ; i ++){
            next[i]=nullptr;
        }
    }
    void add(const char* s){
        if(hit){
            seehit=1;
        }
        if(*s==0){
            hit=1;
            return;
        }
        if(next[s[0]-'0']==nullptr){
            next[s[0]-'0']=new node;
            makenode=1;
        }
        next[s[0]-'0']->add(s+1);
    }
    void clear(){
        for(int i=0;i<10;i++){
            delete next[i];
            next[i]=nullptr;
        }
    }
    ~node(){
        clear();
    }

};

node root;
int main(){
    int t;
    cin>>t;
    while(t--){
        root.clear();
        int n;
        cin>>n;
        seehit=0;
        while(n--){
            makenode=0;
            char c[20];
            cin >> c;
            root.add(c);
            if(!makenode)seehit=1;
        }
        if(seehit)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
