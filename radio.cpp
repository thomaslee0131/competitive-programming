#include<iostream>
#include<string>
using namespace std;
string server[1010][2];
string comm[1010][2];
int main(){
    int n,m;
    bool c=true;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>server[i][0]>>server[i][1];
        server[i][1][server[i][1].size()]=';';
        cout<<server[i][1]<<endl;
    }
    for(int i=0;i<m;i++){
        cin>>comm[i][0]>>comm[i][1];
        for(int j=0;j<n;j++){
            c=true;
            for(int k=0;k<server[i][1].size();k++){
                if(server[i][1][k]!=comm[j][1][k]){
                    c=false;
                }
            }
            if(c==true){
                cout<<comm[i][0]<<" "<<comm[i][1]<<" #"<<server[j][0]<<endl;
                break;
            }   
        }
    }
}

