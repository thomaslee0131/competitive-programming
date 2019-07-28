#include<iostream>
using namespace std;
string att[82];
int ti[82];
int popu[82];
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n,k,v;
        cin>>n>>k>>v;
        for(int j=0;j<n;j++){
            cin>>att[j];
            popu[j]=j;
        }
        for(int j=1;j<v;j++){
            for(int x=0;x<n-1;x++){
                for(int y=x+1;y<n;y++){
                    if(ti[x]>ti[y]){
                        int tem=ti[x];
                        ti[x]=ti[y];
                        ti[y]=tem;
                        string tems=att[x];
                        att[x]=att[y];
                        att[y]=tem;
                        tem=popu[x];
                        popu[x]=popu[y];
                        popu[y]=tem;
                    }
                    if(ti[x]==ti[y]  &&  popu[x]>popu[y]){
                        int tem=ti[x];
                        ti[x]=ti[y];
                        ti[y]=tem;
                        string tems=att[x];
                        att[x]=att[y];
                        att[y]=tem;
                        tem=popu[x];
                        popu[x]=popu[y];
                        popu[y]=tem; 
                    }
                }
            }
            for(int x=0;x<k;x++){
                ti[x]++;
            }
        }
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                if(ti[x]>ti[y]){
                    int tem=ti[x];
                    ti[x]=ti[y];
                    ti[y]=tem;
                    string tems=att[x];
                    att[x]=att[y];
                    att[y]=tem;
                    tem=popu[x];
                    popu[x]=popu[y];
                }
                if(ti[x]==ti[y]  &&  popu[x]>popu[y]){
                    int tem=ti[x];
                    ti[x]=ti[y];
                    ti[y]=tem;
                    string tems=att[x];
                    att[x]=att[y];
                    att[y]=tem;
                    tem=popu[x];
                    popu[x]=popu[y];
                    popu[y]=tem; 
                }
            }
        }
        cout<<"Case #"<<i<<":";
        for(int x=0;x<k;x++){
            cout<<' '<<att[x];
        }
        cout<<endl;
    }
}
