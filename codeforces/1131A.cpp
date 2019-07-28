#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    int h=h1+h2,w=max(w1,w2);
    int ans=(w+h+2)*2;
    cout<<ans<<endl;
}
