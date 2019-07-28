#include<iostream>
using namespace std;
int main(){
    int t,a,b,n;
    cin>>t;
    string s;
    while(t--){
        cin>>a>>b>>n;
        a++;
        b++;
        while(1){
            int mid=(a+b)/2;
            cout<<mid<<endl;;
            fflush(stdout);
            cin >> s;
            if(s=="TOO_BIG"){
                b=mid;
            }
            else if(s=="TOO_SMALL"){
                a=mid;
            }
            else{
                break;
            }
        }
    }
}
