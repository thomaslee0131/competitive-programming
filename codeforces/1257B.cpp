#include<iostream>
#include<map>
using namespace std;

/*unordered_map<int, int> factors;
vector<int> primes;

void get_prime(){
    for(int i = 2; i < 100000; i++){
        
    }
}
*/
int main(){
    int t; cin>>t;
    while(t--){
        int x, y; cin>>x>>y;
        if(x == 1 && y >= 2){
            cout<<"NO"<<endl;
            continue;
        }
        if(x <= 3 && y > 3){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}
