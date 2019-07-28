#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string n;
        cin>>n;
        bool ap=0,bp=0;
        vector<char>a;
        vector<char>b;
        for(char c:n){
            if(c=='0'){
                if(ap)a.push_back('0');
                if(bp)b.push_back('0');
                continue;
            }
            if(c=='1'){
                a.push_back('1');
                ap=1;
                if(bp)b.push_back('0');
                continue;
            }
            if(c=='4'){
                a.push_back('2');
                ap=1;
                b.push_back('2');
                bp=1;
                continue;
            }
            a.push_back(c);
            ap=1;
            if(bp)b.push_back('0');
        }
        if(!bp)b.push_back('0');
        cout<<"Case #"<<i<<": ";
        for(char c:a){
            cout<<c;
        }
        cout<<' ';
        for(char c:b){
            cout<<c;
        }
        cout<<endl;
    }
}
