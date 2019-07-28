#include<iostream>
using namespace std;
string att[52];
int popu[52];
string ans[52];
int anspopu[52];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        long long n,k,v;
        cin>>n>>k>>v;
        for(int i=0;i<n;i++){
            cin>>att[i];
            popu[i]=i;
        }
        int po=(k*(v-1))%n;
        int c=0;
        for(int y=po;y<po+k;y++){
            int a=y;
            if(a>n-1){
                a=y-n;
            }
            ans[c]=att[a];
            anspopu[c]=popu[a];
            c++;
        }
        //cout<<ans[3]<<endl;
        //cout<<'1'<<ans[0]<<'2'<<ans[1]<<'3'<<ans[2]<<'4'<<ans[3]<<endl;
        if(k==1){
            cout<<"Case #"<<I<<": "<<ans[0]<<endl;
            continue;
        }
        /*for(int i=0;i<k-1;i++){
            for(int j=i+1;j<k;j++){
                if(anspopu[i]>anspopu[j]){
                    int tem=anspopu[i];
                    anspopu[i]=anspopu[j];
                    popu[j]=tem;
                    string tems=ans[i];
                    ans[i]=ans[j];
                    ans[j]=tems;
                }
            }
        }*/
        cout<<"Case #"<<I<<":";
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(att[i]==ans[j]){
                    cout<<' '<<ans[j];
                }
            }
        }
        cout<<endl;
        /*cout<<popu[0]<<endl<<popu[1]<<endl<<popu[2]<<endl;
        cout<<'1'<<ans[0]<<'2'<<ans[1]<<'3'<<ans[2]<<'4'<<ans[3]<<endl;
        cout<<"Case #"<<I<<":";
        for(int i=0;i<k;i++){
            cout<<' '<<ans[i];
        }
        cout<<endl;*/
    }
}
