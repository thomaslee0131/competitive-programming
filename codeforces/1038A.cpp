#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int times[k];
    for(int i=0;i<k;i++){
        times[i]=0;
    }
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        times[c-'A']++;
    }
    sort(times,times+k);
    cout<<times[0]*k<<endl;
}
