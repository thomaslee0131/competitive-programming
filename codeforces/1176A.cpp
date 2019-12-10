#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int cnt = 0;
        while(1){
            if(n % 2 == 0){
                n /= 2;
                cnt++;
            }
            else break;
        }
        while(1){
            if(n % 3 == 0){
                n /= 3;
                cnt +=2;
            }
            else break;
        }
        while(1){
            if(n % 5 == 0){
                n /= 5;
                cnt += 3;
            }
            else break;
        }
        if(n % 2 && n != 1){
            cout<<-1<<endl;
            continue;
        }
        cout<<cnt<<endl;
    }
}
