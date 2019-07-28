#include<iostream>
#include<vector>
using namespace std;
bool d[100010];
long long arr[2][150000];
vector<int>pri;
int main(){
    d[0]=1;
    d[1]=1;
    for(int i=2;i*i<100010;i++){
        if(d[i]==0){
            for(int j=i*2;j<100010;j+=i){
                d[j]=1;
            }
        }
    }
    for(int i=0;i<100010;i++){
        if(d[i]==0){
            pri.push_back(i);
            cout<<i<<' ';
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[0][i]>>arr[1][i];
    }
    for(int i=0;i<pri.size();i++){
        bool ans=0;
        for(int j=0;j<n;j++){
            if(arr[0][j]%pri[i]!=0  &&  arr[1][j]%pri[i]!=0){
                ans=0;
                break;
            }
            else ans=1;
        }
        if(ans==1){
            cout<<pri[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
}
