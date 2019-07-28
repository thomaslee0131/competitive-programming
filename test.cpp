#include<iostream>
using namespace std;
int main(){
    int a[5];
    int x[5];
    if(&a[x]==&x[a]){
        cout<<"YES"<endl;
    }
}
