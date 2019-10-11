#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, cnt = 0;
    while(cin>>a>>b>>c>>d){
        cnt++;
        if(a == -1 && b == -1 && c == -1 && d == -1){
            return 0;
        }
        int n = (5544 * a + 14421 * b + 1288 * c - d) % 21252;
        if(n <= 0) n += 21252;
        cout<<"Case "<<cnt<<": the next triple peak occurs in "<<n<<" days."<<endl;
    }
}
