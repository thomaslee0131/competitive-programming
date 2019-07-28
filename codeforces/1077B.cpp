#include<iostream>
using namespace std;
int floor[1010];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&floor[i]);
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(floor[i]==0){
            if(floor[i-1]==1&&floor[i+1]==1){
                floor[i+1]=0;
                ans++;
            }
        }
    }
    printf("%d",ans);
}
