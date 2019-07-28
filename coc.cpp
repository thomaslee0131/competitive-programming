#include<iostream>
using namespace std;
int rooms[200066];
int letter[200066];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>rooms[i];
    }
    for(int i=0;i<n;i++){
        cin>>letter[i];
        int l=0,r=n,cnt=0,t,b;
        while(1){
            int mid=(l+r)/2;
            for(int j=0;j<mid;j++){
                cnt+=rooms[j];
            }
            if(cnt<letter[i]-rooms[mid]){
                l=mid;
            }
            if(cnt>letter[i]){
                r=mid;
            }
            else {t=mid;b=cnt-rooms[mid];break;}
        }
        cout<<t<<" "<<letter[i]-b<<endl;
    }
}
