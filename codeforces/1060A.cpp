#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=n/11;
    int eight=0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='8')eight++;
    }
    cout<<min(mx,eight)<<endl;
}
