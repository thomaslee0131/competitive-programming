#include<iostream>
using namespace std;
int main(){
    int l=0,r=1001;
    while(1){
        int mid=(l+r)/2;
        cout<<mid<<endl;
        cout << flush;
        string s;
        cin>>s;
        if(s=="correct")break;
        if(s=="higher"){
            l=mid;
            continue;
        }
        else{
            r=mid+1;
        }
    }
}
