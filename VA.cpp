#include<iostream>
#include<algorithm>
using namespace std;
int score[110];
int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>score[i];
    sort(score,score+n+1);
    for(int i=1;i<=n;i++){
        if(score[i]>score[i-1])c++;
    }
    cout<<c<<endl;
}
