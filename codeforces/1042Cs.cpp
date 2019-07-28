#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,negnum,maxneg=-1e9,pos=-1;
int arr[200010];
vector<int> zpos;
int main(){
    cin>>n;
    int zf=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            negnum++;
            if(arr[i]>=maxneg){
                maxneg=arr[i];
                pos=i;
            }
        }
        if(arr[i]==0){
            if(zf<0){
                zf=i;
            }       
            zpos.push_back(i);
        }
    }
    if(negnum%2){
        if(zpos.size()){
            arr[pos]=0;
            printf("1 %d %d\n",pos+1,zpos[0]+1);
        }
        else{
            arr[pos]=0;
            printf("2 %d\n",pos+1);
        }
    }
    for(int i=1;i<(int)zpos.size();i++){
        printf("1 %d %d\n",zpos[i]+1,zf+1);
    }
    int f=-1;
    bool hasans=0;
    for(int i=0;i<n;i++){
        if(arr[i]){
            f=i;
            break;
        }
    }
    for(int i=f+1;i<n;i++){
        if(arr[i]){
            printf("1 %d %d\n",i+1,f+1);
            hasans=1;
        }
    }
    if(n-negnum-(int)zpos.size()>0&&zpos.size()){
        printf("2 %d\n",zf+1);
    }
    else if(negnum>1&&zpos.size()){
        printf("2 %d\n",zf+1);
    }
}
