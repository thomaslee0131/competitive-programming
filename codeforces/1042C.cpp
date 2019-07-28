#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
int arr[200010];
vector<int>zpos;
int main(){
    cin>>n;
    int maxneg=-1e9,negnum=0,pos=-1,znum=0,steps=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            negnum++;
            maxneg=max(maxneg,arr[i]);
            if(arr[i]==maxneg){
                pos=i;
            }
        }
        if(arr[i]==0){
            zpos.push_back(i);
            znum++;
        }
    }
    if(pos!=-1){
        if(negnum%2){
            if(!znum){
                cout<<2<<' '<<pos+1<<endl;
                arr[pos]=0;steps++;
            }
            else{
                arr[pos]=0;steps++;
                cout<<1<<' '<<pos+1<<' '<<zpos[0]+1<<endl;   
            }
        }
    }
    for(int i=1;i<(int)zpos.size();i++){
        cout<<1<<' '<<zpos[i]+1<<' '<<zpos[0]+1<<endl;steps++;
    }
    if(znum&&steps<n-1){cout<<2<<' '<<zpos[0]+1<<endl;steps++;}
    int f=-1;
    for(int i=0;i<n;i++){
        if(arr[i]){
            f=i;
            break;
        }
    }
    if(f!=-1){
        for(int i=f+1;i<n;i++){
            if(arr[i]){
                cout<<1<<' '<<i+1<<' '<<f+1<<endl;
                steps++;
            }
        }
    }
    
}
