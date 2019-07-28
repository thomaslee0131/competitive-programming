#include<iostream>
#include<queue>
using namespace std;



int main(){
    queue<int> q;
    for(int i=1;i<=10;i++){
        q.push(i);
        
    }
    int t=9;
    while(t--){
        cout<<q.front();
        q.pop();
    }
}
